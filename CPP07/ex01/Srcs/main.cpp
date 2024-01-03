#include "../Libs/iter.hpp"

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

// class Awesome
// {
//     public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//     private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }


// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//   Awesome tab2[5];
//   iter( tab, 5, print);
//   iter( tab2, 5, print);
//   return 0 ;
// }

// int main() {
//     int arr[] = {97,98,99};

//     ::iter(arr, 3, &::to_string);
//     ::iter(arr, 3, &::_Ccout);
    
//     ::iter(arr, 3, &::to_int);
//     ::iter(arr, 3, &::_Icout);
// }