#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	//std::cout << "=============" << std::endl;
	//ClapTrap empty;
	//ClapTrap john("JOHN");
	//std::cout << "=============" << std::endl;
	//empty = john;
	//ClapTrap copy_john(john);
	//empty.attack("Target");
	//std::cout << "=============" << std::endl;

	//ClapTrap bill("BILL");
	//bill.takeDamage(1);
	//bill.takeDamage(9);
	//bill.beRepaired(10);
	//std::cout << "=============" << std::endl;
	//bill.attack("Shrek");
	//std::cout << "=============" << std::endl;
	
	std::cout << "=============" << std::endl;
	ScavTrap empty;
	empty = ScavTrap("LOL");
	empty.attack("KEKUS");
	std::cout << "=============" << std::endl;
	std::cout << "=============" << std::endl;
	ScavTrap scavTrap("SCAV");
	scavTrap.attack("Mikky");
	scavTrap.guardGate();
	std::cout << "=============" << std::endl;
	scavTrap.takeDamage(1);
	scavTrap.takeDamage(99);
	scavTrap.beRepaired(100);
	return 0;
}
