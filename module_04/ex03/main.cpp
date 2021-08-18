#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

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
	ICharacter *character = new Character("Stive");
	ICharacter *target = new Character("TARGET");
	std::cout << character->getName() << std::endl;
	std::cout << "==============================" << std::endl;
	character->equip(ice);
	character->equip(ice);
	character->equip(ice);
	character->equip(cure);
	character->use(0, *target);
	character->use(3, *target);
	character->use(-1, *target);
	character->use(10, *target);
	std::cout << "==============================" << std::endl;
	character->unequip(3);
	//character->equip(ice);
	character->use(3, *target);
	std::cout << "==============================" << std::endl;
	//MateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	//ICharacter* me = new Character("me");


	//IMateriaSource* src2 = src;

	//AMateria* tmp;
	//tmp = src2->createMateria("ice");
	//me->equip(tmp);
	//tmp = src2->createMateria("cure");
	//me->equip(tmp);
	//tmp = src2->createMateria("ice");
	//me->equip(tmp);
	//tmp = src2->createMateria("ice");
	//me->equip(tmp);

	//ICharacter* bob = new Character("bob");

	//std::cout << "Test 2: " << std::endl;
	//me->use(0, *bob);
	//me->use(1, *bob);
	//me->use(2, *bob);
	//me->use(3, *bob);

	//delete bob;
	//delete me;
	//delete src;
	//while (1);
}
