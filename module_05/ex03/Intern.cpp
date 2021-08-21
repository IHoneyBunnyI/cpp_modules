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

Form *Intern::Shrubbery(const std::string& target) {
   std::cout << "ShrubberyCreationForm created" << std::endl;
   return new ShrubberyCreationForm(target);
}

Form *Intern::Robot(const std::string &target) {
   std::cout << "RobotomyRequestForm created" << std::endl;
   return new RobotomyRequestForm(target);
}

Form *Intern::President(const std::string &target) {
   std::cout << "PresidentialPardonForm" << std::endl;
   return new PresidentialPardonForm(target);
}
const char	*Intern::WrongTypeFormException::what() const throw()
{
	return ("\033[31mError Creation Form\033[0m");
}

Form *Intern::makeForm(const std::string& formName, const std::string& target)
{
	std::string types[3] = {"shrubbery request", "robotomy request", "presidential request"};
	typedef Form *(Intern::*funcs) (const std::string &target);
	funcs f[3] = {&Intern::Shrubbery, &Intern::Robot, &Intern::President};
	for (int i = 0; i < 3; ++i) {
		if (types[i] == formName)
			return (this->*f[i])(target);
	}
	throw WrongTypeFormException();
	return 0;
}
