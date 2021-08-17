#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& animal);
		WrongAnimal &operator = (const WrongAnimal& animal);
		
		std::string getType() const;

		void makeSound() const;
};

#endif
