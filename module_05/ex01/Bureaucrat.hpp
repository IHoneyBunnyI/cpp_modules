#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string name;
		int grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& ref);
		Bureaucrat(std::string name, int grade);
		Bureaucrat& operator = (const Bureaucrat& ref);

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
		int getGrade() const;
		void toHighGrade();
		void toLowGrade();
};

std::ostream& operator << (std::ostream& cout, const Bureaucrat& ref);

#endif
