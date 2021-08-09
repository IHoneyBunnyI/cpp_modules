#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	this->name = "hz";
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
