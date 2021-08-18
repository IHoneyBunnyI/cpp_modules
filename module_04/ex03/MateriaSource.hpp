#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria* materiasType[2];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& ref);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource & ref);

		virtual void learnMateria(AMateria *tmp);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
