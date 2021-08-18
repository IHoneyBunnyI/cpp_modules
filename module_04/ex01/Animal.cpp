#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal constructor" << std::endl;
}

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

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "zzzZZZzzzZZzzZZ" << std::endl;
}
