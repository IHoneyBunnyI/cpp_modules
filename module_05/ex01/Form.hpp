#ifndef FORM_FPP
#define FORM_FPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		const int gradeToSign;
		const int gradeToExecute;
		bool isSigned;

	public:
		Form();
		~Form();
		Form(const Form& ref);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form& operator = (const Form& ref);

		void beSigned(Bureaucrat& ref);

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

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
};

std::ostream& operator << (std::ostream& cout, Form& form);

#endif
