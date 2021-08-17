#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
}

Cat::~Cat(){}

Cat::Cat(const Cat& cat)
{
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow MEEEEOOW MeeeOOW" << std::endl;
}
