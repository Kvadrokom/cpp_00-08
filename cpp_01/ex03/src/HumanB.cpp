#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << weapon_type->getType() << '\n';
}

void	HumanB::setWeapon(Weapon &weapon)
{
	weapon_type = &weapon;
}

HumanB::~HumanB()
{
}

HumanB::HumanB()
{
}