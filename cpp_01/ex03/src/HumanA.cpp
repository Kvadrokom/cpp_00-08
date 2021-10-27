#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type) : weapon_type_(weapon_type), name( name )
{}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << weapon_type_.getType() << '\n';
}

HumanA::~HumanA() {}
