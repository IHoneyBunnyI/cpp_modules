#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
	this->brain->fillIdeas("Cat's idea");
	this->brain->printIdeas(5);
}

Cat::~Cat()
{
	if (this->brain)
		delete this->brain;
}

Cat::Cat(const Cat& cat)
{
	this->type = cat.type;
	this->brain = new Brain;
	this->brain->fillIdeas("Cat's idea");
	this->brain->printIdeas(5);
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this->brain)
		delete this->brain;
	this->type = cat.type;
	this->brain = new Brain;
	this->brain->fillIdeas("Cat's idea");
	this->brain->printIdeas(5);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow MEEEEOOW MeeeOOW" << std::endl;
}
