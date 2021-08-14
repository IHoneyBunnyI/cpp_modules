#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Empty";
	this->hitpoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << "Default constructor ClapTrap is called" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << "Default constructor ClapTrap is called with name: " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	*this = clapTrap;
	std::cout << "Copy constructor ClapTrap is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap is called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap& clapTrap)
{
	this->name = clapTrap.name;
	this->hitpoint = clapTrap.hitpoint;
	this->energyPoint = clapTrap.energyPoint;
	this->attackDamage = clapTrap.attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target <<" , causing " << this->attackDamage << " points of damage! " << std::endl;
    this->energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoint -= amount;
	if (this->hitpoint <= 0)
	{
		std::cout << "\033[31m" << this->name << " is Dead" << "\033[0m" << std::endl;
		return;
	}
	std::cout << this->name << " take " << amount << " damage and he has " <<
	this->hitpoint << " Hitpoints" << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint <= 0)
	{
		std::cout << this->name << " haven't energy " << std::endl;
		return ;
	}
	std::cout << this->name << " take " << amount << " heals ";
	this->hitpoint += amount;
	std::cout << "and he have " << this->hitpoint << " hitpoints" << std::endl;
}
