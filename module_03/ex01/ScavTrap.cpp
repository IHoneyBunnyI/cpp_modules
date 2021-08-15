#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitpoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "Default constructor ScavTrap is called with name: " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
	*this = scavtrap;
	std::cout << "Copy constructor ScavTrap is called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavtrap)
{
	this->name = scavtrap.name;
	this->hitpoint = scavtrap.hitpoint;
	this->energyPoint = scavtrap.energyPoint;
	this->attackDamage = scavtrap.attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target <<" , causing " << this->attackDamage << " points of damage! " << std::endl;
    this->energyPoint--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode" << std::endl;
}
