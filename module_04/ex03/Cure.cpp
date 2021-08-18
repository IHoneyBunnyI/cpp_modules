#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria("cure") {}

Cure::Cure() : AMateria() {
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
