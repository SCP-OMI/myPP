#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
class easyfind{
    private :
        int find;
        T container;
    public :
        easyfind();
        easyfind(T container, int find);
        static void Cfind(T container, int find);
        easyfind(const easyfind& _easycopy);
        easyfind& operator=(const easyfind& _easy);
        ~easyfind();
};

template <class T>
easyfind<T>::easyfind(){
    std::cout << "default consti" << std::endl;
}

template <class T>
easyfind<T>::easyfind(T container, int find){ 
    this->find = find;
    this->container = container;
}

template <class T>
void easyfind<T>::Cfind(T container, int find) {
    class T::iterator it = std::find(container.begin(), container.end(), find);
    if (it != container.end()) {
        std::cout << "Your element was found at the index: " << std::distance(container.begin(), it) << std::endl;
    } else {
        std::cerr << "Your element was not found in the container :(" << std::endl;
    }
}

template <class T>
easyfind<T>::easyfind(const easyfind& _easycopy){
    *this = _easycopy;
}
template <class T>
easyfind<T>& easyfind<T>::operator=(const easyfind& _easy){
    this->container = _easy.container;
    this->find = _easy.find;
    return *this;
}
template <class T>
easyfind<T>::~easyfind(){
    std::cout << "default dest" << std::endl;
}


#endif