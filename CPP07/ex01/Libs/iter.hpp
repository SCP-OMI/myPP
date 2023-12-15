#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<class T>
void iter(T *add, size_t len, void(*fct)(T&)){
    for (int i = 0; i < len; i++){
        fct(add[i]);
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
   static_cast<char>(N + '0');
}

template<class T>
void to_int(T &N){
    static_cast<int>(N);
}


#endif