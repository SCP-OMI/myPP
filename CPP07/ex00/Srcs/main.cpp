#include "../Libs/Whatever.hpp"

int main (){
    int N1 = 1;
    int N2 = 2;

    std::string S1 = "STUMMY HURTY :(";
    std::string S2 = "STUMMY HURTY+ :(";

    std::cout << "Old N1 : " << N1 << " Old N2 : " << N2 << std::endl;
    ::swap(N2,N1);
    std::cout << "New N1 : " << N1 << " New N2 : " << N2 << std::endl;
    std::cout << ::min(N1, N2) << std::endl;
    std::cout << ::max(N1, N2) << std::endl;

    std::cout << "Old S1 : " << S1 << " Old S2 : " << S2 << std::endl;
    ::swap(S1, S2);
    std::cout << "New S1 : " << S1 << " New S2 : " << S2 << std::endl;
    std::cout << ::min(S1, S2) << std::endl;
    std::cout << ::max(S1, S2) << std::endl;

}