#include "Brain.hpp"

Brain::Brain(){}

Brain::~Brain(){}

Brain::Brain(const Brain& brain)
{
	*this = brain;
}

Brain &Brain::operator=(const Brain &animal)
{
	return (*this);
}

