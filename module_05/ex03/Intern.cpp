#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern& ref)
{
	(void)ref;
}

Intern& Intern::operator = (const Intern& ref)
{
	(void)ref;
	return (*this);
}

Form *Intern::Shrubbery(std::string& target) {
   std::cout << "ShrubberyCreationForm created" << std::endl;
   return new ShrubberyCreationForm(target);
}

Form *Intern::Robot(std::string &target) {
   std::cout << "RobotomyRequestForm created" << std::endl;
   return new RobotomyRequestForm(target);
}

Form *Intern::President(std::string &target) {
   std::cout << "PresidentialPardonForm" << std::endl;
   return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string& formName, std::string& target) {
	int i;
	std::string types[3] = {"shrubbery request", "robotomy request", "presidential request"};
	Form *(Intern::*f[3])(std::string&) = {&Intern::Shrubbery, &Intern::Robot, &Intern::President};
	for (i = 0; i < 3; ++i) 
	{
		if (types[i] == formName)
			return (this->*f[i])(target);
	}
	return 0;
}
