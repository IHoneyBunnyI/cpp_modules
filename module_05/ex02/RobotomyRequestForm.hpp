#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: private Form
{
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& ref);

		RobotomyRequestForm& operator = (const RobotomyRequestForm& ref);
		void execute(Bureaucrat const & executor) const;
};

#endif
