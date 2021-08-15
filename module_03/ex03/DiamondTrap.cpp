#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->hitpoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap)
{
	*this = diamondtrap;
	std::cout << "Copy constructor DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->hitpoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
	std::cout << "Default constructor DiamondTrap is called with name: " << this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap& diamondtrap)
{
	this->name = diamondtrap.name;
	this->hitpoint = diamondtrap.hitpoint;
	this->energyPoint = diamondtrap.energyPoint;
	this->attackDamage = diamondtrap.attackDamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	std::cout << "Hitpoint: " << this->hitpoint << std::endl;
	std::cout << "Energy: " << this->energyPoint << std::endl;
}

void DiamondTrap::WhoAmI()
{
	std::cout << "Diamond name = " << this->name <<
	", but ClapTrap name = " << ClapTrap::name << std::endl;
}
