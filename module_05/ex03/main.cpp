#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

	Bureaucrat stive("Stive", 1);
	Bureaucrat john("John", 150);
	std::cout << stive << std::endl;
	std::cout << john << std::endl;
	return 0;
}
