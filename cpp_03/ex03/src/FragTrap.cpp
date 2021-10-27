#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	Name = "NoName";
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap "<< Name << " was born\n";
}

FragTrap::FragTrap(const std::string &_Name):ClapTrap(_Name)
{
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	Name = _Name;
	std::cout << "FragTrap " << Name << " was born\n";
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap " << Name << " was killed\n";
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << Name << " attack ";
	std::cout << target << ", causing 30 points of damage!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " says: \"Take high five!!!\"\n";
}
