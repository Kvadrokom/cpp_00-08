#include "Zombie.hpp"

int	main()
{
	Zombie F("FFF");
	Zombie* A = newZombie("AAA");
	F.voice();
	A->voice();
	randomChump("Dear");
	delete A;
	return (0);
}
