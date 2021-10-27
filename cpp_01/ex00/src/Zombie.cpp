#include "Zombie.hpp"

void	Zombie::voice(void)
{
	std::cout << name << ':' <<"\"BraiiiiiiinnnzzzZ...\"\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ' ' << "destroyed\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	Zombie::voice();	
}

Zombie::Zombie( void )
{
}
