#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):ClapTrap()
{
	// Name = ClapTrap::Name;
	Hitpoints = FragTrap::Hitpoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap "<< Name << " was born\n";
}

DiamondTrap::DiamondTrap(const std::string &_Name) : ClapTrap(std::string(_Name + "_clap_name")),
													ScavTrap(_Name + "_clap_name"), FragTrap(_Name +"_clap_name")
{
	ScavTrap	help;

	Name = _Name;
	Hitpoints = FragTrap::Hitpoints;
	EnergyPoints = help.getEnergy();
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap "<< Name << " was born\n";
}

void DiamondTrap::attack(std::string const &target)
{
	this->FragTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << Name << " was killed\n";
}

int	DiamondTrap::getEnergy(void)
{
	return EnergyPoints;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << Name << ' ' << ClapTrap::Name << "\n";
}