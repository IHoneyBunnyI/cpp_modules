#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: AMateria
{
	public:
		Cure();
		~Cure();
		Cure(std::string const & type);
		Cure(const Cure& ref);
		Cure& operator = (const Cure& ref);
		AMateria* clone() const;
		std::string const & getType() const;
};

#endif
