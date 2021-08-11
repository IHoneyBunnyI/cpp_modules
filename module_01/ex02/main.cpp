#include <iostream>
#include <string>
int main()
{
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "address string by address \033[32m\t" << &string << "\033[0m" << std::endl;
	std::cout << "address string by pointer \033[32m\t" << stringPTR << "\033[0m" << std::endl;
	std::cout << "address string by reference \033[32m\t" << &stringREF << "\033[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "string by pointer \033[32m\t\t" << *stringPTR << "\033[0m" << std::endl;
	std::cout << "string by reference \033[32m\t\t" << stringREF << "\033[0m" << std::endl;
}
