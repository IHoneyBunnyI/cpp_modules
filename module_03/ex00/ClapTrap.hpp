#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP 

#include <iostream>

class ClapTrap
{
private:
		std::string name;
		int hitpoint;
		int energyPoint;
		int attackDamage;

public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clapTrap);
		~ClapTrap();
		ClapTrap &operator = (const ClapTrap& clapTrap);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;
		int getHitPoint() const;
		int getEnergyPoint() const;
};

std::ostream& operator << (std::ostream &cout, const ClapTrap& ClapTrap);

#endif
