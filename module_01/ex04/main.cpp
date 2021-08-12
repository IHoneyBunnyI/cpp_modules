#include <cstdio>
#include <ios>
#include <iostream>
#include <fstream>
#include <string>

std::string replace_all(std::string & str, std::string & find, std::string & replace)
{
	std::string result;
	size_t find_len = find.size();
	size_t pos,from=0;
	while ( std::string::npos != (pos=str.find(find,from)) ) {
		result.append( str, from, pos-from );
		result.append( replace );
		from = pos + find_len;
	}
	result.append( str, from , std::string::npos );
	return result;
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
		line = replace_all(line, s1, s2);
		if (!file_in.eof())
			file_out << line << std::endl;
	}
}
