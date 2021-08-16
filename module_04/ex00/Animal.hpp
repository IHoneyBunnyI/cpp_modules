#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(const Animal& animal);
		Animal &operator = (const Animal& animal);

		void makeSound();
};

#endif
