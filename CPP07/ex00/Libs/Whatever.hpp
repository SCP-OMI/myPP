#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<class T>
void swap(T &a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<class T>
T min(T val_A, T val_B){
    if (val_A > val_B || val_A == val_B)
        return val_B;
    else
        return val_A;
}

template<class T>
T max(T val_A, T val_B){
    if (val_B > val_A || val_A == val_B)
        return val_B;
    else
        return val_A;
}





#endif