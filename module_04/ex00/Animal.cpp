#include "Animal.hpp"

Animal::Animal(): type("Animal"){}

Animal::~Animal(){}

Animal::Animal(const Animal& animal)
{
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return (*this);
}

void Animal::makeSound()
{
	std::cout << "Animal don't say" << std::endl;
}
