#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria("cure") {}

Ice::Ice() : AMateria() {
	this->type = "cure";
}

Ice::~Ice() {}

Ice::Ice(const Ice & src) {
	*this = src;
}

Ice & Ice::operator=(Ice const &rhs) {
	this->type = rhs.getType();
	return *this;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}
