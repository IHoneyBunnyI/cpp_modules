#include "whatever.hpp"
#include <iostream>
#define XGREEN "\033[1;32m"
#define XWHITE "\033[0m"

int main()
{
	int a = 2;
	int b = 3;
	std::cout << "Before: " << "a = " << XGREEN << a << XWHITE << ", b = " << XGREEN << b << XWHITE << std::endl;
	::swap( a, b );
	std::cout << "After: " << "a = " << XGREEN << a << XWHITE << ", b = " << XGREEN << b << XWHITE << std::endl;
	std::cout << "min( a, b ) = " << XGREEN << ::min( a, b ) << XWHITE << std::endl;
	std::cout << "max( a, b ) = " << XGREEN << ::max( a, b ) << XWHITE << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
