#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE
#include <map>
#include <string>
#include <iomanip>
#include <cstdlib> 
#include <sstream>
#include <iostream>
#include <fstream>

class BitcoinExchange{
    private :
        std::map<std::string, float> BasedData;
    public :
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& _copy);
        BitcoinExchange& operator=(const BitcoinExchange& btc);

        void ParseRates(std::ifstream& rates);
        // void ParseInput(std::ifstream& input);
        bool CheckRates(std::string& rate);
        bool CheckDate(const std::string& date);
        bool CheckValidity(const std::string& date);
        float GetRate(const std::string &date);

};
    float hh_stof(std::string rate);
    void error_print(std::string error);




#endif