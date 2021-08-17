#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal"){}

WrongAnimal::~WrongAnimal(){}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	this->type = animal.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong zzzZZZzzzZZzzZZ" << std::endl;
}
