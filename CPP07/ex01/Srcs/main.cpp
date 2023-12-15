#include "../Libs/iter.hpp"

int main() {
    int arr[] = {97,98,99};

    ::iter(arr, 3, &::to_string);
    ::iter(arr, 3, &::_Ccout);
    
    ::iter(arr, 3, &::to_int);
    ::iter(arr, 3, &::_Icout);
}