#include "Fixed.hpp"

#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// int	main(void)
// {
// 	Fixed	a(5);
// 	Fixed	b(10);

// 	std::cout << "a is 5 and b is 10" << std::endl;
// 	std::cout << std::endl;

// 	std::cout << " a + b should be 15" << std::endl;
// 	std::cout << (a + b) << std::endl;
// 	std::cout << std::endl;


// 	std::cout << " a < b should be false" << std::endl;
// 	std::cout << (a < b) << std::endl;
// 	std::cout << std::endl;

// 	std::cout << " a > b should be true" << std::endl;
// 	std::cout << (a > b) << std::endl;
// 	std::cout << std::endl;

// 	return (0);
// }