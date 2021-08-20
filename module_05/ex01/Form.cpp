#include "Form.hpp"

Form::Form(): name("NoName"){}

Form::~Form() {}

Form::Form(const Form& ref)
{
	this->name = ref.name;
	//this->grade = ref.grade;
}

Form& Form::operator = (const Form& ref)
{
	this->name = ref.name;
	//this->grade = ref.grade;
	return (*this);
}
