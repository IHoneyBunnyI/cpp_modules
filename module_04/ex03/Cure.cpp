#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(std::string const & type){
this->type = type;}

Cure::Cure() {
	this->type = "cure";
}

Cure::~Cure() {}

Cure::Cure(const Cure & src) {
	*this = src;
}

Cure & Cure::operator=(Cure const &rhs) {
	this->type = rhs.getType();
	return *this;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}
std::string const &Cure:: getType() const
{
	return (this->type);
}
