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

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getHitPoint() const
{
	return (this->hitpoint);
}

int ClapTrap::getEnergyPoint() const
{
	return (this->energyPoint);
}


std::ostream& operator << (std::ostream &cout, const ClapTrap& clapTrap)
{
	cout << "\033[32m" << clapTrap.getName() <<
	" has " << clapTrap.getHitPoint() << " Hit point and "
	<< clapTrap.getEnergyPoint() << " Energy Point" << "\033[0m";
	return cout;
}
