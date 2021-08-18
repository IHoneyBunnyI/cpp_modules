#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria *materias[4];
	public:
		Character();
		~Character();
		Character(std::string name);
		Character(const Character& ref);
		Character& operator = (const Character& ref);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif
