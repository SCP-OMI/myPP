#include "../Libs/PmergeMe.hpp"


int main(int ac, char **av){

    if (ac == 1)
        error_print("usage : ./PmergeMe 'ints'");
    PmergeMe Merger(ac,av);

    Merger.VectorSort(ac, av);
    Merger.ListSort(ac, av);

}
