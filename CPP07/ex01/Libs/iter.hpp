#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<class T, class T2>

void iter(T *arr, size_t len, void(*fct)( T2&)){
    for (size_t i = 0; i < len; i++){
        fct(arr[i]);
    }
}

template<class T>
void _Ccout(T &input){
    std::cout << (char)input << std::endl;
}
template<class T>
void _Icout(T &input){
    std::cout << (int)input << std::endl;
}

template<class T>
void to_string(T &N){
    char string = static_cast<char>(N + '0');
    (void) string;
}

template<class T>
void to_int(T &N){
    int num = static_cast<int>(N);
    (void) num;
}


#endif