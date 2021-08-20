#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: private Form
{
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& ref);

		PresidentialPardonForm& operator = (const PresidentialPardonForm& ref);
		void execute(Bureaucrat const & executor) const;
};

#endif
