#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "WrongCat";
}

WrongCat::~WrongCat(){}

WrongCat::WrongCat(const WrongCat& cat)
{
	*this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	this->type = cat.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow MEEEEOOW MeeeOOW" << std::endl;
}
