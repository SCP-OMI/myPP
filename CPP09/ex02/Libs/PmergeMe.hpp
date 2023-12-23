#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include <sstream>
#include <ctime>

#define CALLIBRE 100000

class PmergeMe{
    private :
        std::vector<unsigned int> vector;
    public :
        PmergeMe();
        PmergeMe(int ac, char** av);
        PmergeMe(const PmergeMe& _copy);
        PmergeMe& operator=(const PmergeMe& merge);

        /* Vector Sorting */
        void VectorSort(int ac, char **av);
        std::vector<unsigned int> VectorInsert(std::vector<unsigned int> _vec);
        std::vector<unsigned int> VectorMerge(std::vector<unsigned int> left, std::vector<unsigned int> right);
        /* List Sorting */
        
        void ListSort(int ac, char **av);
        std::list<unsigned int> ListInsert(std::list<unsigned int> _vec);
        std::list<unsigned int> ListMerge(std::list<unsigned int> left, std::list<unsigned int> right);

        ~PmergeMe();
};
    void error_print(std::string error);
    unsigned int Callibre(const std::string& str);

#endif