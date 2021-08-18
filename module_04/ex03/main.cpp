#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

int main()
{
	//AMateria tmp;
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	AMateria *wrong = new Cure("Wrong");
	std::cout << "==============================" << std::endl;
	std::cout << ice->getType() << std::endl;
	std::cout << cure->getType() << std::endl;
	std::cout << "==============================" << std::endl;
	std::cout << wrong->getType() << std::endl;
	delete wrong;
	std::cout << "==============================" << std::endl;
	AMateria *clone_cure = cure->clone();
	AMateria *clone_ice = ice->clone();
	std::cout << "clone = " << clone_cure->getType() << std::endl;
	std::cout << "clone = " << clone_ice->getType() << std::endl;
	delete clone_cure;
	delete clone_ice;
	std::cout << "==============================" << std::endl;
	//while (1);
}
