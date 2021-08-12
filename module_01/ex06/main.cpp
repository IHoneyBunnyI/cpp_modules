#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen(karen);
	switch (ac) 
	{
	case 2:
		karen.complain(av[1]);
		return 0;
	default:
		std::cout << "Error parametr" << std::endl;
		return 0;
	}
}
