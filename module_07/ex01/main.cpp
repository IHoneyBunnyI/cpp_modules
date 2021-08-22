#include <iostream>
#include "iter.hpp"

int main()
{
	int arrI[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(arrI, 10, cout);
	std::cout << "===========================" << std::endl;
	iter(arrI, 2, cout);
	std::cout << "===========================" << std::endl;
	double arrD[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	iter(arrD, 10, cout);
}
