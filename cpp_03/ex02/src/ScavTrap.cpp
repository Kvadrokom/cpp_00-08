#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	Name = "NoName";
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap "<< Name << " was born\n";
}

ScavTrap::ScavTrap(const std::string &_Name):ClapTrap(_Name)
{
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	Name = _Name;
	std::cout << "ScavTrap " << Name << " was born\n";
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap " << Name << " was killed\n";
}


void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << Name << " attack ";
	std::cout << target << ", causing 20 points of damage!\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << Name << " have enterred in Gate keeper mode\n";
}
