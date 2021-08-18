#include "Character.hpp"

Character::Character(): name("null")
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
}

Character::Character(std::string name): name(name)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = 0;
}


Character::Character(const Character& ref)
{
	this->name = ref.name;
	for (int i = 0; i < 4; i++)
	{
		if (ref.materias[i] != 0)
		{
			this->materias[i] = ref.materias[i]->clone();
		}
	}
}

Character& Character::operator = (const Character& ref)
{
	this->name = ref.name;
	for (int i = 0; i < 4; i++)
	{
		if (ref.materias[i] != 0)
		{
			this->materias[i] = ref.materias[i]->clone();
		}
	}
	return (*this);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(this->materias[i])){
			this->materias[i] = m;
			return;
		}
	}
	std::cout << "Materials is full" << std::endl;
}

void Character::unequip(int idx)
{
	if ((idx < 0 || idx > 4) && this->materias[idx] == 0)
	{
		std::cout << "can't unequip materia" << std::endl;
		return;
	}
	this->materias[idx] = 0;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::use(int idx, ICharacter &target)
{
	if (this->materias[idx])
		this->materias[idx]->use(target);
	else
		std::cout << "can't use this!!!" << std::endl;
}
