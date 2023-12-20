#include "../Libs/BitcoinExchange.hpp"


void error_print(std::string error){
    std::cerr << "7ala chaba khoya 7bibi : " << error << std::endl;
}

int main(int ac, char **av){
    if (ac != 2)
        error_print("Not enough args");
    std::ifstream input(av[1]);
    if (!input.is_open())
        error_print("Input file is not accessible");
    std::ifstream rates("/mnt/o/42/myPP/CPP09/ex00/Files/data.csv");
    if (!input.is_open())
        error_print("Rates file is not accessible");
    BitcoinExchange btc;
    btc.ParseRates(rates);
    // btc.ParseInput(input);
    
    // std::cout << "=======ParseInput=======" << std::endl;
    std::string line;

    std::getline(input, line);
    while(std::getline(input, line)){
        size_t i = line.find('|');
        if(i == std::string::npos || line.length() < i+2){
            error_print("Line's FUCKED ( Date | Value !respected ) at => " + line);
            continue;
        }
        std::string date = line.substr(0, i-1);

        // std::cout << "BEGIN    " << std::endl;
        // std::cout << "====" << CheckValidity(date) << std::endl;
        // std::cout << "====" << CheckDate(date) << std::endl;

        if (!btc.CheckDate(date) || !btc.CheckValidity(date))
            continue;
        std::string valid_rate = line.substr(i+2);
        if (!btc.CheckRates(valid_rate))
            continue;
        // std::cout << "------------------" << std::endl;
        // std::cout << valid_rate << std::endl;
        // std::cout << "------------------" << std::endl;
        // std::cout << "============" << std::endl;
        float Rate = hh_stof(valid_rate);
        // std::cout << "::::" << Rate << "::::" \<< std::endl;
        // std::cout << "::::" << btc.GetRate(date) << "::::" << std::endl;
        std::cout << date << " => " << Rate << " = " << std::setprecision(3) << Rate * btc.GetRate(date) << std::endl;
    }
    rates.close();
    input.close();

}