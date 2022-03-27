#include <iostream>
#include "whatever.hpp"

// int	main(void)
// {
// 	std::cout << "--- min ---" << std::endl << std::endl;

// 	std::cout << min<int>(5, 10) << std::endl;
// 	std::cout << min<int>(10, 10) << std::endl;
// 	std::cout << min<char>('c', 'a') << std::endl;
// 	std::cout << min<std::string>("aaaa", "aaab") << std::endl;
// 	std::cout << min<float>(42.24f, 24.42f) << std::endl;

// 	std::cout << std::endl << "--- max ---" << std::endl << std::endl;

// 	std::cout << max<int>(5, 10) << std::endl;
// 	std::cout << max<int>(10, 10) << std::endl;
// 	std::cout << max<char>('c', 'a') << std::endl;
// 	std::cout << max<std::string>("aaaa", "aaab") << std::endl;
// 	std::cout << max<float>(42.24f, 24.42f) << std::endl;

// 	std::cout << std::endl << "--- max ---" << std::endl << std::endl;


// 	int		a = 5;
// 	int		b = 10;
// 	std::cout << "a: " << a << " - b: " << b << std::endl;
// 	std::cout << "Swap" << std::endl;
// 	swap<int>(a, b);
// 	std::cout << "a: " << a << " - b: " << b << std::endl;
// 	std::cout << std::endl;


// 	float	af = 42.42f;
// 	float	bf = 24.24f;
// 	std::cout << "a: " << af << " - b: " << bf << std::endl;
// 	std::cout << "Swap" << std::endl;
// 	swap<float>(af, bf);
// 	std::cout << "a: " << af << " - b: " << bf << std::endl;
// 	std::cout << std::endl;

// 	return (0);
// }

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}