#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitpoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "Default constructor FragTrap is called with name: " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap)
{
	*this = fragtrap;
	std::cout << "Copy constructor FragTrap is called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &fragtrap)
{
	this->name = fragtrap.name;
	this->hitpoint = fragtrap.hitpoint;
	this->energyPoint = fragtrap.energyPoint;
	this->attackDamage = fragtrap.attackDamage;
	return (*this);
}

//void FragTrap::attack(const std::string target)
//{
	//std::cout << "FragTrap " << this->name << " attacks " << target <<" , causing " << this->attackDamage << " points of damage! " << std::endl;
    //this->energyPoint--;
//}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " give fives!!!" << std::endl;
}
