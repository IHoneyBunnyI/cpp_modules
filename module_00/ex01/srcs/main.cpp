#include "Contact.hpp"
#include "Phonebook.hpp"

int ft_stoi(std::string s)
{
	int i = 0;
	int res = 0;
	if (s[0] != '+' && s[0] != '-' && (s[0] < '0' || s[0] > '9'))
		return (-1);
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + s[i] - '0';
		i++;
	}
	if (s[0] == '-')
		res = -res;
	return (res);
}

int full_exit(void)
{
	std::cout << "Bye Bye" << std::endl;
	exit(0);
}

void add(Contact contact[8], int index)
{
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
	contact[index].set_first_name(in);
	std::cout << "enter last name? > ";
	std::cin >> in;
	contact[index].set_last_name(in);
	std::cout << "enter nickname? > ";
	std::cin >> in;
	contact[index].set_nickname(in);
	std::cout << "enter phone number? > ";
	std::cin >> in;
	contact[index].set_phone_number(in);
	std::cout << "enter darkest secret? > ";
	std::cin >> in;
	contact[index].set_darkest_secret(in);
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
	std::string s_index;
	int index;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (!contact[++i].is_empty() && i < 8)
	{
		std::cout << "         " << i << "|";
		print_line(contact[i].get_first_name());
		std::cout << "|";
		print_line(contact[i].get_last_name());
		std::cout << "|";
		print_line(contact[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "whose information to view (id) > ";
	std::cin >> s_index;
	index = ft_stoi(s_index);
	if (std::cin.eof())
	{
		std::cout << "\033[31mError unexpected EOF\033[0m" << std::endl;
		exit(1);
	}
	else if ((std::cin.fail()) || index > 7 || index < 0 || index == -1)
	{
		std::cout << "\033[31mno such contact exists\033[0m" << std::endl;
		return ;
	}
	else if (!contact[index].is_empty())
	{
		std::cout << "first name:     ";
		std::cout << contact[index].get_first_name() << std::endl;
		std::cout << "last name:      ";
		std::cout << contact[index].get_last_name() << std::endl;
		std::cout << "nickname:       ";
		std::cout << contact[index].get_nickname() << std::endl;
		std::cout << "phone number:   ";
		std::cout << contact[index].get_phone_number() << std::endl;
		std::cout << "darkest secret: ";
		std::cout << contact[index].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "\033[31mEmpty contact\033[0m" << std::endl;
}

int main()
{
	Phonebook phonebook;
	phonebook.run();
}
