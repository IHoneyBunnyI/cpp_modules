#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->fillIdeas("Dog's idea");
	this->brain->printIdeas(3);
}

Dog::~Dog()
{
	if (this->brain)
		delete this->brain;
}

Dog::Dog(const Dog& dog)
{
	this->type = dog.type;
	this->brain = new Brain;
	this->brain->fillIdeas("Dog's idea");
	this->brain->printIdeas(3);
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this->brain)
		delete this->brain;
	this->type = dog.type;
	this->brain = new Brain();
	this->brain->fillIdeas("Dog's idea");
	this->brain->printIdeas(3);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof WOOF WoOf WoooF" << std::endl;
}
