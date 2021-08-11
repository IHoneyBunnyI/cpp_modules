#include <iostream>

int main(int ac, char **av)
{
	if (ac != 4){
		std::cout << "Error" << std::endl;
		return (0);
	}
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::cout << s1 << s2;
}
