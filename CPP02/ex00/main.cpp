#include <iostream>

class	car{
	private :
	
	
	public :
	int i;
	int b;
	car(){};
	car(car& other){
		*this = other;
	};
	~car(){};

};

int main() {
	car a;

	a.i = 42;
	a.b= 1337;
	car t(a);
	std::cout << t.i << std::endl;
	std::cout << t.b << std::endl;
}