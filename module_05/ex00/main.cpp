#include "Bureaucrat.hpp"

int main()
{

	Bureaucrat stive("Stive", 1);

	std::cout << stive << std::endl;
	stive.toLowGrade();
	std::cout << stive << std::endl;
	stive.toLowGrade();
	std::cout << stive << std::endl;

	try 
	{
		stive.toHighGrade();
		stive.toHighGrade();
		stive.toHighGrade();
	} 
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << stive << std::endl;
	std::cout << "===================================" << std::endl;
	Bureaucrat john("John", 150);
	std::cout << john << std::endl;
	john.toHighGrade();
	john.toHighGrade();
	john.toHighGrade();
	john.toHighGrade();
	std::cout << john << std::endl;
	john.toLowGrade();
	john.toLowGrade();
	john.toLowGrade();
	try
	{
		john.toLowGrade();
		std::cout << john << std::endl;
		john.toLowGrade();
	}
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << john << std::endl;
	return 0;
}
