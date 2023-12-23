#include "../Libs/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::cout << "deaf" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& _copy){
    *this = _copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& btc){
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

    // std::cout << "============ParseRates============" << std::endl;
    // std::cout << "====" << rates << std::endl;
    std::getline(rates, line);
        // std::cout <<  "----Line----" << std::endl;
        // std::cout <<  line << std::endl;
    // exit(0);
    std::map<std::string, int>::iterator it;
    // std::map<std::string, int>::iterator it.end();
    while(std::getline(rates, line)){
        i = line.find(',');
        std::string rate = line.substr(i + 1);
        this->BasedData[line.substr(0, i)] = hh_stof(rate);
    }

    // for (std::map<std::string, float>::iterator it = BasedData.begin(); it != BasedData.end(); ++it) {
    //         std::cout << "Date: " << it->first << ", Rate: " << it->second << std::endl;
    //     }

}

bool BitcoinExchange::CheckDate(const std::string& date){
    // std::cout << "============CheckDate============" << std::endl;
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
    // std::cout << "============CheckValidity============" << std::endl;
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
			||  (day > 28 && month == 2)){
        error_print("Day is out of bounds");
        return false;
    }
    return true;
}

bool BitcoinExchange::CheckRates(std::string& rate){
    // std::cout << "============CheckRates============" << std::endl;
    // int reate = static_cast<int>(rate[0]);
    // reate-= 48;
    // std::cout << rate << std::endl;
    // rate += "\r";
    // if (rate.at(0) == '.' )
    //     std::cout << "does start with ." << std::endl;
    // if(rate.find('.', rate.length() - 1) != std::string::npos)
    //     std::cout << "does end with ." << std::endl;
    // if (rate.empty())
    //     std::cout << "is empty" << std::endl;
    // if (rate.find_first_not_of("0123456789.-") == std::string::npos)
    //     std::cout << "it doesn't exist" << std::endl;
//    int z = rate.find_first_not_of("0123456789.-\n\r");
//    std::cout << "index : " << z << std::endl;
//    std::cout << "element :" << static_cast<int>(rate[z]) << std::endl;
//    std::cout << "element :" << rate.size() << std::endl;


//    std::cout << "=============================" << std::endl;

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

    // if (rate.empty() || rate.find_first_not_of("0123456789.-") != std::string::npos
	// ||  rate.at(0) == '.' || rate.find('.', rate.length() - 1) != std::string::npos)
    //     error_print("Invalid");
	// else if (rate.at(0) == '-')
    //     error_print("That's just money laundering at this point");
	// else if (rate.length() > 10 || (rate.length() == 10 && rate > "2147483647"))
    //     error_print("That's just money laundering at this point");
	// else
	// 	return true;
	// return false;
}

float BitcoinExchange::GetRate(const std::string& date){
    // std::cout << "======GetRate=======" << std::endl;

    // std::cout << (--this->BasedData.lower_bound(date))->second << "::::"<<std::endl;
    if (this->BasedData.count(date) > 0){
        return this->BasedData.at(date);
    }
    // std::cout << "HELLP" << std::endl;
    return (--this->BasedData.lower_bound(date))->second;
}

// void BitcoinExchange::ParseInput(std::ifstream& input){
//     // std::cout << "=======ParseInput=======" << std::endl;
//     std::string line;

//     std::getline(input, line);
//     while(std::getline(input, line)){
//         size_t i = line.find('|');
//         if(i == std::string::npos || line.length() < i+2){
//             error_print("Line's FUCKED ( Date | Value !respected ) at => " + line);
//             continue;
//         }
//         std::string date = line.substr(0, i-1);

//         // std::cout << "BEGIN    " << std::endl;
//         // std::cout << "====" << CheckValidity(date) << std::endl;
//         // std::cout << "====" << CheckDate(date) << std::endl;

//         if (!CheckDate(date) || !CheckValidity(date))
//             continue;
//         std::string valid_rate = line.substr(i+2);
//         if (!CheckRates(valid_rate))
//             continue;
//         // std::cout << "============" << std::endl;
//         float Rate = hh_stof(valid_rate);
//         std::cout << "::::" << Rate << "::::" << std::endl;
//         // std::cout << "::::" << GetRate(date) << "::::" << std::endl;
//         std::cout << date << " => " << Rate << " = " << std::setprecision(3) << Rate * GetRate(date) << std::endl;
//     }
// }