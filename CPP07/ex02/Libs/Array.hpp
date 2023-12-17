#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array{
    private :
        T *arr;
        int arr_size;
    public :
        Array();
        Array(unsigned int n);
        Array(const Array& _arr);
        Array& operator =(const Array& _arr);
        T& operator[](int n);
        int size();
        ~Array();
};

class _exception : public std::exception {
public:
    virtual const char* what() const throw();
    virtual ~_exception()throw();
};

_exception::~_exception() throw() {}

template <class T>
Array<T>::Array(): arr(new T[0]()), arr_size(0){
    std::cout << "Default Constructor has been called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n): arr(new T[n]()), arr_size(n){
    std::cout << "Parametrised Constructor has been called" << std::endl;
}

template <class T>
Array<T>::Array(const Array& _arr) : arr(new T[_arr.size()]), arr_size(_arr.arr_size){
    *this = _arr;
}

template <class T>
Array<T> &Array<T>::operator=(const Array& _arr){
    delete[] this->arr;
    this->arr = new T[_arr.arr_size];
    this->arr_size = _arr.arr_size;
    for (int i = 0; i < _arr.arr_size; i++){
        this->arr[i] = _arr.arr[i];
    }
    return *this;
}

template <class T>
T& Array<T>::operator[](int n){
    if (n >= this->arr_size)
        throw _exception();
    return(this->arr[n]);
}

template <class T>
int Array<T>::size(){
    return this->arr_size;
}

const char* _exception::what() const throw() {
    return "7ala chaba khoya hbibi : rak bra al3chir";
}
template <class T>
Array<T>::~Array(){
    std::cout << "destructor has been called" << std::endl;
}






#endif