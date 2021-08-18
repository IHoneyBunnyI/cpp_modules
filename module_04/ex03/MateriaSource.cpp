#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->materiasType[0] = 0;
	this->materiasType[1] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	this->materiasType[0] = ref.materiasType[0]->clone();
	this->materiasType[1] = ref.materiasType[0]->clone();
}

MateriaSource::~MateriaSource()
{
	delete this->materiasType[0];
	delete this->materiasType[1];
}
MateriaSource& MateriaSource::operator=(const MateriaSource & ref)
{
	this->materiasType[0] = ref.materiasType[0]->clone();
	this->materiasType[1] = ref.materiasType[0]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *tmp)
{
	if (tmp->getType() == "ice")
	{
		if (!(this->materiasType[0]))
			this->materiasType[0] = tmp;
		else
			std::cout << "I know this ice" << std::endl;
	}
	else if (tmp->getType() == "cure")
	{
		if (!(this->materiasType[1]))
			this->materiasType[1] = tmp;
		else
			std::cout << "I know this cure" << std::endl;
	}
	else
		std::cout << "Error learn" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (this->materiasType[0] && type == "ice")
		return materiasType[0]->clone();
	else if (this->materiasType[1] && type == "cure")
		return materiasType[1]->clone();
	else
		std::cout <<"I don't know this " << type << std::endl;
	return 0;
}
