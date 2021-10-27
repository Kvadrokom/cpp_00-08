#include "Zombie.hpp"

int	main()
{
	Zombie *pack;

	pack = ZombieHorde(3, "Zombie");
	delete[] pack;
	return (0);
}
