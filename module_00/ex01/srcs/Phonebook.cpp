#include "Phonebook.hpp"

void Phonebook::run()
{
	std::string option;
	std::cout << "allowed commands:\033[32m\n-SEARCH\n-ADD\n-EXIT\n\033[0m" << std::endl;
	this->index = 0;
	Contact contact[8];
	while (!false)
	{
		std::cout << "\033[01mchoose what you are going to do > \033[0m";
		std::cin >> option;
		if (std::cin.eof())
			full_exit();
		if (option == "ADD")
		{
			add(contact, index);
			this->index++;
			if (this->index > 7)
				this->index = 0;
		}
		else if (option == "SEARCH")
			search(contact);
		else if (option == "EXIT")
			full_exit();
	}
}
