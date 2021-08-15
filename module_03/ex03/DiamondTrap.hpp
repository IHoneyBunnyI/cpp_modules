#ifndef DIMONDTRAP_HPP
#define DIMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& diamondtrap);
		DiamondTrap(std::string name);

		DiamondTrap& operator = (const DiamondTrap& diamondtrap);
		void attack(const std::string& target);
		void WhoAmI();
};

#endif
