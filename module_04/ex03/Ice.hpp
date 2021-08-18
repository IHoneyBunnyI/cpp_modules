#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(std::string const & type);
		Ice(const Ice& ice);
		Ice& operator = (const Ice& ice);
		AMateria* clone() const;

		std::string const & getType() const;
};

#endif
