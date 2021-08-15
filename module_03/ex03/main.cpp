#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "=============" << std::endl;
	DiamondTrap empty;
	std::cout << "=============" << std::endl;
	DiamondTrap diamond("DIAMOND");
	std::cout << "=============" << std::endl;
	diamond.attack("EMERALD");
	std::cout << "=============" << std::endl;
	diamond.WhoAmI();
	std::cout << "=============" << std::endl;
	return 0;
}
