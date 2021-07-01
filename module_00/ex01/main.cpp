#include "Contact.hpp"
#include <iostream>
#include <ostream>
#include <string>

int full_exit(void)
{
	std::cout << "Bye Bye" << std::endl;
	return 0;
}

void add(Contact contact[8])
{
	
}

int main()
{
	std::string option;
	std::cout << "allowed commands:\033[32m\n-SEARCH\n-ADD\n-EXIT\n\033[0m" << std::endl;
	Contact contact[8];
	while (!false)
	{
		std::cout << "choose what you are going to do > ";
		std::cin >> option;
		if (std::cin.eof())
			return(full_exit());
		if (option == "ADD")
			add(contact);
		else if (option == "SEARCH")
			std::cout << "SEARCH\n";
		else if (option == "EXIT")
			return(full_exit());
	}
}
