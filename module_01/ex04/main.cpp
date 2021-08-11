#include <cstdio>
#include <ios>
#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
	(void)s1;
	(void)s2;
	return line;
}

std::string upper(std::string str)
{
	std::string new_str;
	for (size_t i = 0; i < str.length(); i++)
		new_str += std::toupper(str[i]);
	return new_str;

}

int main(int ac, char **av)
{
	if (ac != 4){
		std::cout << "Error" << std::endl;
		return (0);
	}
	std::ifstream file_in(av[1]);
	std::ofstream file_out(upper((std::string)av[1]) + ".replace");
	std::string s1(av[2]);
	std::string s2(av[3]);
	while (file_in)
	{
		std::string line;
		std::getline(file_in, line);
		std::string new_line = ft_replace(line, s1, s2);
		file_out << new_line << std::endl;
	}
}
