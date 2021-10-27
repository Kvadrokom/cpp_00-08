#include "Zombie.hpp"

void	Zombie::voice(void)
{
	std::cout << "\"BraiiiiiiinnnzzzZ...\"\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ' ' << "destroyed\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << ':';
	Zombie::voice();	
}

Zombie::Zombie(void)
{
	std::cout << "Zombie" << " created \n";
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}
