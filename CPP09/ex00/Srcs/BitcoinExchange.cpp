#include "../Libs/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::cout << "deaf" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& _copy){
    *this = _copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& btc){
    (void) btc;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){
    std::cout << "dest" << std::endl;
}

float hh_stof(std::string rate){
    float STOF;
    std::istringstream iss(rate);
    iss >> STOF;
    return STOF;
}

void BitcoinExchange::ParseRates(std::ifstream& rates){
    std::string line;
    size_t i;

    std::getline(rates, line);
    std::map<std::string, int>::iterator it;
    // std::map<std::string, int>::iterator it.end();
    while(std::getline(rates, line)){
        i = line.find(',');
        std::string rate = line.substr(i + 1);
        this->BasedData[line.substr(0, i)] = hh_stof(rate);
    }

}

bool BitcoinExchange::CheckDate(const std::string& date){
    if (date.empty())
        return false;
    size_t month_sep = date.find('-');
    size_t date_sep = date.find('-', month_sep + 1);

    if (month_sep == std::string::npos || date_sep == std::string::npos || date.find_first_not_of("0123456789,-") != std::string::npos){
        error_print("Line's FUCKED (Check Seperators) at => " + date);
        return false;
    }
    return true;
}

bool BitcoinExchange::CheckValidity(const std::string& date){
    std::string exerpt;
    std::istringstream iss(date);
    int year, month, day;

    std::getline(iss,exerpt, '-');
    year = std::atoi(exerpt.c_str());
    std::getline(iss, exerpt, '-');
    month = std::atoi(exerpt.c_str());
    std::getline(iss, exerpt, '-');
    day = std::atoi(exerpt.c_str());

    if (year < 2009 || year > 2022){
        error_print("Year is out of bounds");
        return false;
        }
    if (month < 1 || month > 12){
        error_print("Month is out of bounds");
        return false;
    }
    if ((day < 1 || day > 31)
			||  (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			||  ((day == 29 && month == 2 && year % 4 != 0))){
        error_print("Day is out of bounds");
        return false;
    }
    return true;
}

bool BitcoinExchange::CheckRates(std::string& rate){

    if (rate.empty() || rate.find_first_not_of("0123456789.-\n\r") != std::string::npos
	||  rate.at(0) == '.' || rate.find('.', rate.length() - 1) != std::string::npos){
        error_print("Invalid Rate");
        return false;
    }
    else if (rate.at(0) == '-'){
        error_print("That's just money laundering at this point");
        return false;
    }
    else if (rate.length() > 10 || (rate.length() == 10 && rate > "2147483647")){
        error_print("What kind of rate is that?");
        return false;
    }
    else
        return true;
}

float BitcoinExchange::GetRate(const std::string& date){
    if (this->BasedData.count(date) > 0){
        return this->BasedData.at(date);
    }
    return (--this->BasedData.lower_bound(date))->second;
}