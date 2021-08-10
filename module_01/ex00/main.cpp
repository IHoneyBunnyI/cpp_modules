#include "Zombie.hpp"

int main()
{
	Zombie *b = newZombie("all");
	b->announce();
	delete b;
	Zombie a("all2");
	randomChump("all3");
}
