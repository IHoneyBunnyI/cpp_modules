#include "Contact.hpp"

int full_exit(void)
{
	std::cout << "Bye Bye" << std::endl;
	return 0;
}

void add(Contact contact[8])
{
	int index = -1;
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].is_empty())
		{
			index = i;
			break;
		}
	}
	if (index == -1)
		index = 7;
	std::string in;
	std::cout << "enter first name? > ";
	std::cin >> in;
	contact[index].first_name = in;
	std::cout << "enter last name? > ";
	std::cin >> in;
	contact[index].last_name = in;
	std::cout << "enter nickname? > ";
	std::cin >> in;
	contact[index].nickname = in;
	std::cout << "enter phone number? > ";
	std::cin >> in;
	contact[index].phone_number = in;
	std::cout << "enter darkest secret? > ";
	std::cin >> in;
	contact[index].darkest_secret = in;
}

void print_line(std::string s)
{
	int i = 0;
	if (s.length() > 10)
	{
		while (i < 9)
			std::cout << s[i++];
		std::cout << ".";
	}
	else if (s.length() < 10)
	{
		i = 10 - s.length();
		while (i-- > 0)
			std::cout << " ";
		std::cout << s;
	}
	else
		std::cout << s;
}

void search(Contact contact[8])
{
	int i = -1;
	int index;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (!contact[++i].is_empty() && i < 8)
	{
		std::cout << "         " << i << "|";
		print_line(contact[i].first_name);
		std::cout << "|";
		print_line(contact[i].last_name);
		std::cout << "|";
		print_line(contact[i].nickname);
		std::cout << std::endl;
	}
	std::cout << "whose information to view (id) > ";
	std::cin >> index;
	if (!contact[index].is_empty())
	{
		std::cout << "first name:     ";
		std::cout << contact[index].first_name << std::endl;
		std::cout << "last name:      ";
		std::cout << contact[index].last_name << std::endl;
		std::cout << "nickname:       ";
		std::cout << contact[index].nickname << std::endl;
		std::cout << "phone number:   ";
		std::cout << contact[index].phone_number << std::endl;
		std::cout << "darkest secret: ";
		std::cout << contact[index].darkest_secret << std::endl;
	}
	else
		std::cout << "\033[31mno such contact exists\033[0m" << std::endl;
}

int main()
{
	std::string option = "AAAA";
	std::cout << "allowed commands:\033[32m\n-SEARCH\n-ADD\n-EXIT\n\033[0m" << std::endl;
	Contact contact[8];
	while (!false)
	{
		std::cout << "\033[01mchoose what you are going to do > \033[0m";
		std::cin >> option;
		if (std::cin.eof())
			return(full_exit());
		if (option == "ADD")
			add(contact);
		else if (option == "SEARCH")
			search(contact);
		else if (option == "EXIT")
			return(full_exit());
	}
}
