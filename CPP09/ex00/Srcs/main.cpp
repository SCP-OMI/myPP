#include "../Libs/BitcoinExchange.hpp"


void error_print(std::string error){
    std::cerr << "7ala chaba khoya 7bibi : " << error << std::endl;
}

int main(int ac, char **av){
    if (ac != 2){
        error_print("Not enough args");
        exit(1);
    }
    std::ifstream input(av[1]);
    if (!input.is_open()){
        error_print("Input file is not accessible");
        exit(1);
    }
    std::ifstream rates("/mnt/o/42/myPP/CPP09/ex00/Files/data.csv");
    if (!rates.is_open()){
        error_print("Rates file is not accessible");
        exit(1);
    }
    
    BitcoinExchange btc;
    btc.ParseRates(rates);
    std::string line;
    std::getline(input, line);
    while(std::getline(input, line)){
        size_t i = line.find('|');
        if(i == std::string::npos || line.length() < i+2){
            error_print("Line's FUCKED ( Date | Value !respected ) at => " + line);
            continue;
        }
        std::string date = line.substr(0, i-1);

        if (!btc.CheckDate(date) || !btc.CheckValidity(date))
            continue;
        std::string _rate = line.substr(i+2);
        if (!btc.CheckRates(_rate))
            continue;

        float Rate = hh_stof(_rate);
        std::cout << date << " => " << Rate << " = " << std::setprecision(3) << Rate * btc.GetRate(date) << std::endl;
    }
    rates.close();
    input.close();

}