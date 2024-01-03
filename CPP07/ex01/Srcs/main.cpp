#include "../Libs/iter.hpp"

// int main() {
//     int arr[] = {-97,-98,-99};

//     ::iter(arr, 3, &::to_string);
//     ::iter(arr, 3, &::_Ccout);
    
//     ::iter(arr, 3, &::to_int);
//     ::iter(arr, 3, &::_Icout);
// }
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}