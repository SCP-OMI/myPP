#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>{
    public :
        typedef typename std::stack<T>::container_type::iterator it;
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& copy);
        MutantStack& operator= (const MutantStack& Mutant);

        it begin();
        it end();
};

template<class T>
MutantStack<T>::MutantStack(){
    std::cout << "def" << std::endl;
}
template<class T>
MutantStack<T>::~MutantStack(){
    std::cout << "dest" << std::endl;
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack& copy){
    *this = copy;
}

template <class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& Mutant){
    return *this;
}


template<class T>
typename MutantStack<T>::it MutantStack<T>::begin(){
    std::cout << "=======Called The Begin iterator========" << std::endl;
    return std::stack<T>::c.begin();
}

template<class T>
typename MutantStack<T>::it MutantStack<T>::end(){
    std::cout << "=======Called The End iterator========" << std::endl;
        return std::stack<T>::c.end();
}

#endif