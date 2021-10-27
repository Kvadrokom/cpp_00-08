#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): Hitpoints(10), EnergyPoints(10), AttackDamage(10)
{
	Name = "NoName";
	std::cout << "ClapTrap "<< Name << " was born\n";
}

ClapTrap::ClapTrap(const std::string &_Name)
{
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 10;
	Name = _Name;
	std::cout << "ClapTrap "<< Name << " was born\n";
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap "<< Name << " was killed\n";
}

ClapTrap& ClapTrap::operator = (const ClapTrap &_Name)
{
	if (this == &_Name)
		return *this;
	Name = _Name.Name;
	AttackDamage = _Name.AttackDamage;
	EnergyPoints = _Name.EnergyPoints;
	Hitpoints = _Name.Hitpoints;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << Name << " attack ";
	std::cout << target << ", causing 10 points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << Name << " took " << amount << " damage!\n";
	Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << Name << " was repaired " << amount << " health!\n";
	Hitpoints += amount;
}

int	ClapTrap::getHitpoints(void) const
{
	return Hitpoints;
}

int	ClapTrap::getAttackDamage(void) const
{
	return AttackDamage;
}

std::string ClapTrap::getName() const
{
	return Name;
}