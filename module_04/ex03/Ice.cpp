#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(std::string const & type) : AMateria(type) {}

Ice::Ice() : AMateria() {
	this->type = "ice";
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

std::string const &Ice:: getType() const
{
	return (this->type);
}
