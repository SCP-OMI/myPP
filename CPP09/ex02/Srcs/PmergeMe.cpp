#include"../Libs/PmergeMe.hpp"

void error_print(std::string error){
    std::cerr << "7ala chaba khoya 7bibi : " << error << std::endl;
    exit(1);
}

PmergeMe::PmergeMe(int ac, char **av){
    std::cout << "hello" << std::endl;
    for(int i = 1; i < ac; i++){
    if(std::string(av[i]).find_first_not_of("0123456789 ") != std::string::npos)
        error_print("Not a digit shithead!");
    }

    for(int i = 1; i< ac; i++)
        this->vector.push_back(Callibre(av[i]));
    
    std::vector<unsigned int>::iterator it;
    std::vector<unsigned int>::iterator it2;

    for(it = vector.begin(); it != vector.end(); it++){
        for(it2 = it + 1; it2 != vector.end(); it2++)
            if (*it2 == *it)
                error_print("Duplicates!");
    }
}

/*Vector Sort*/
std::vector<unsigned int> PmergeMe::VectorMerge(std::vector<unsigned int> left, std::vector<unsigned int> right){
    std::vector<unsigned int> temp;

    while (!left.empty() && !right.empty()){
        if (left.front() <= right.front()){
            temp.push_back(left.front());
            left.erase(left.begin());
        }
        else{
            temp.push_back(right.front());
            right.erase(right.begin());
        }
    }

    while (!left.empty()){
        temp.push_back(left.front());
        left.erase(left.begin());
    }
    while (!right.empty()){
        temp.push_back(right.front());
        right.erase(right.begin());
    }
    return temp;
    
    
}

std::vector<unsigned int> PmergeMe::VectorInsert(std::vector<unsigned int> _vec){
    if (_vec.size() <= 1)
        return _vec;
    
    int mid = _vec.size() / 2;
    std::vector<unsigned int> left(_vec.begin(), _vec.begin() + mid);
    std::vector<unsigned int> right(_vec.begin() + mid, _vec.end());

    left = VectorInsert(left);
    right = VectorInsert(right);

    return VectorMerge(left, right);
}

void PmergeMe::VectorSort(int ac, char **av){
    std::vector<unsigned int>_vector;

    for(int i = 1; i <ac; i++)
        _vector.push_back(Callibre(av[i]));

    std::cout << "vector Before : " << std::endl;

    std::vector<unsigned int>::iterator it;
    for(it = _vector.begin(); it != _vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::clock_t start = std::clock();

    _vector = VectorInsert(_vector);
    
    double span = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * CALLIBRE;

    std::cout << "vector After : " << std::endl;

    std::vector<unsigned int>::iterator it2;
    for(it2 = _vector.begin(); it2 != _vector.end(); it2++)
        std::cout << *it2 << " ";
    std::cout << std::endl;

    std::cout << "Time to handle " << ac - 1 << " elements using a vector is : " << span << "micro_sec" << std::endl;
}

/*List Sort*/

std::list<unsigned int> PmergeMe::ListMerge(std::list<unsigned int>left, std::list<unsigned int> right){
    std::list<unsigned int> temp;

    while(!left.empty() && !right.empty()){
        if (left.front() <= right.front()){
            temp.push_back(left.front());
            left.erase(left.begin());
        }
        else{
            temp.push_back(right.front());
            right.erase(right.begin());
        }
    }

    while(!left.empty()){
        temp.push_back(left.front());
        left.erase(left.begin());
    }

    while(!right.empty()){
        temp.push_back(right.front());
        right.erase(right.begin());
    }
    return temp;
}

std::list<unsigned int> PmergeMe::ListInsert(std::list<unsigned int> _list){
    if (_list.size() <= 1)
        return _list;
    int mid = _list.size() / 2;

    std::list<unsigned int> left;
    std::list<unsigned int> right;

    for(int i = 0; i < mid; i++){
        left.push_back(_list.front());
        _list.pop_front();
    }
    right = _list;
    
    left = ListInsert(left);
    right = ListInsert(right);

    return ListMerge(left, right);
}

void PmergeMe::ListSort(int ac, char **av){
    std::list<unsigned int> temp;

    for (int i = 1; i < ac; i++)
        temp.push_back(Callibre(av[i]));

    std::cout << "list Before : " << std::endl;
    std::list<unsigned int>::const_iterator it;
    for(it = temp.begin(); it != temp.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::clock_t start = std::clock();

    temp = ListInsert(temp);

    double span = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * CALLIBRE;

    std::cout << "list After : " << std::endl;
    for(it = temp.begin(); it != temp.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Time to handle " << ac - 1 << " elements using a vector is : " << span << "micro_sec" << std::endl;
}


unsigned int Callibre(const std::string& str){
    // char c = *str;
    unsigned int num;
    std::stringstream iss(str);

    iss >> num;
    return num;
}

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& _copy){
    *this = _copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& merge){
    (void) merge;
    return *this;
}

PmergeMe::~PmergeMe(){}
