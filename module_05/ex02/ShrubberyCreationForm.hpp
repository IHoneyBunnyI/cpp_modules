#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: private Form
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& ref);

		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& ref);
		void execute(Bureaucrat const & executor) const;
};

#endif
