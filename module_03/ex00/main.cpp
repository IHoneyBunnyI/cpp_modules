#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap;
	ClapTrap clap2("JOHN");

	clap = clap2;
	std::cout << clap << std::endl;
	return 0;
}
