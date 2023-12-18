#include "../Libs/MutantStack.hpp"

int main(){
    MutantStack<int> ms;

	ms.push(1);
	ms.push(2);
	ms.push(3);
	ms.push(4);
	ms.push(5);

    std::cout << "=====Let's start!=====" << std::endl;

    MutantStack<int>::it begin = ms.begin();
    MutantStack<int>::it end = ms.end();

    while(end != begin){
        std::cout << *begin << std::endl;
        begin++;
    }
}