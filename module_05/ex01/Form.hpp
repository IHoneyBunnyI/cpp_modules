#ifndef FORM_FPP
#define FORM_FPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string name;

	public:
		Form();
		~Form();
		Form(const Form& ref);
		Form& operator = (const Form& ref);


		void			beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
