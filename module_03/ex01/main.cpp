#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "=============" << std::endl;
	ClapTrap empty;
	ClapTrap john("JOHN");
	std::cout << "=============" << std::endl;
	empty = john;
	ClapTrap copy_john(john);
	empty.attack("Target");
	std::cout << "=============" << std::endl;

	ClapTrap bill("BILL");
	bill.takeDamage(1);
	bill.takeDamage(9);
	bill.beRepaired(10);
	std::cout << "=============" << std::endl;
	bill.attack("Shrek");
	std::cout << "=============" << std::endl;
	return 0;
}
