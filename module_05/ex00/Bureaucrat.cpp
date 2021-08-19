#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("NoName"), grade(150){}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
	this->name = ref.name;
	this->grade = ref.grade;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& ref)
{
	this->name = ref.name;
	this->grade = ref.grade;
	return (*this);
}


std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		return;
	this->grade--;
}
void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		return;
	this->grade++;
}

std::ostream& operator << (std::ostream& cout, const Bureaucrat& ref)
{
	cout << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
	return (cout);
}
