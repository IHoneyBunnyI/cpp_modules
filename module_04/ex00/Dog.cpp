#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
}

Dog::~Dog(){}

Dog::Dog(const Dog& dog)
{
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return (*this);
}

void Dog::makeSound()
{
	std::cout << "Woof WOOF WoOf WoooF" << std::endl;
}
