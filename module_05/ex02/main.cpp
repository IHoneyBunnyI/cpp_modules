#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Bureaucrat stive("Stive", 11);
	std::cout << stive << std::endl;

	Form form("FORM", 10, 10);
	std::cout << form << std::endl;
	return 0;
	
}
