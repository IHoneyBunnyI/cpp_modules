#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index_level = 0;
	while (levels[index_level] != level && index_level < 4)
		index_level++;

	void (Karen::*function)();

	switch (index_level)
	{
	case 0:					//fall-through
		function = &Karen::debug;
	case 1:
		function = &Karen::info;
	case 2:
		function = &Karen::warning;
	case 3:
		function = &Karen::error;
		break;
	default:
		std::cout << "I dont't know this level" << std::endl;
		return ;
	}
	(this->*function)();
}
