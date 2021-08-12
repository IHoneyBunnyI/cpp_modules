#include <cstdio>
#include <ios>
#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll( std::string const& original, std::string const& from, std::string const& to )
{
	std::string new_line;
	std::string results;
	std::string::const_iterator end = original.end();
	std::string::const_iterator current = original.begin();
	std::string::const_iterator next = std::search( current, end, from.begin(), from.end() );
	while ( next != end )
	{
		results.append( current, next );
		results.append( to );
		current = next + from.size();
		next = std::search( current, end, from.begin(), from.end() );
	}
	results.append( current, next );
	return results;
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
		line = replaceAll(line, s1, s2);
		if (!file_in.eof())
			file_out << line << std::endl;
	}
}
