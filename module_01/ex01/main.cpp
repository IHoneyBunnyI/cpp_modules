#include "Zombie.hpp"

int main()
{
	int N(10);
	Zombie *horde = zombieHorde(N, "Zombie");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	horde[3].announce();
	horde[4].announce();
	horde[5].announce();
	horde[6].announce();
	horde[7].announce();
	horde[8].announce();
	horde[9].announce();
	delete [] horde;
}
