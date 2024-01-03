#include "../Libs/Whatever.hpp"

// int N1 = 0;
// int main (){
//     int N1 = 1;
//     int N2 = 2;

//     std::string S1 = "STUMMY HURTY :(";
//     std::string S2 = "STUMMY HURTY+ :(";

//     std::cout << "Old N1 : " << N1 << " Old N2 : " << N2 << std::endl;
//     ::swap(N2,N1);
//     std::cout << "New N1 : " << N1 << " New N2 : " << N2 << std::endl;
//     std::cout << ::min(N1, N2) << std::endl;
//     std::cout << ::max(N1, N2) << std::endl;

//     std::cout << "Old S1 : " << S1 << " Old S2 : " << S2 << std::endl;
//     ::swap<std::string>(S1, S2);
//     std::cout << "New S1 : " << S1 << " New S2 : " << S2 << std::endl;
//     std::cout << ::min(S1, S2) << std::endl;
//     std::cout << ::max(S1, S2) << std::endl;

// }


class Awesome
{
  public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
  private:
    int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	Awesome a(2), b(4);

        swap(a, b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a, b) << std::endl;
        std::cout << min(a, b) << std::endl;
        return (0);
}