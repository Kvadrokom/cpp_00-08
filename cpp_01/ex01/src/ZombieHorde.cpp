#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie *pack;

	if (N <= 0)
		return (nullptr);
	pack = new Zombie[N];
	while (i < N)
	{
		pack[i].set_name(name + std::to_string(i + 1));
		std::cout << pack[i].get_name() << ':';
		pack[i].voice();
		i++;
	}
	return (pack);
}