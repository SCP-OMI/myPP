#include "../Libs/easyfind.hpp"
#include <list>

int main() {
    int length = 10;
    std::list<int> array;
    
    for (int i = 1; i <= length; i++) {
        array.push_back(i*2);
    }

    // for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it) {
    //     std::cout << *it << std::endl;
    // }

    easyfind<std::list<int> >::Cfind(array, 8);
    easyfind<std::list<int> >::Cfind(array, 1000);

    return 0;
}
