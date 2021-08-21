#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& ref);
		Intern& operator = (const Intern& ref);

		Form *Shrubbery(const std::string& target);
		Form *Robot(const std::string &target);
		Form *President(const std::string &target);
		Form* makeForm(const std::string& nameForm, const std::string& target);
		class WrongTypeFormException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif
