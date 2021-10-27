#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string		Name;
	int				Hitpoints;
	int				EnergyPoints;
	int				AttackDamage;

public:
	ClapTrap(void);
	ClapTrap(const std::string& Name);
	~ClapTrap();
	ClapTrap(const ClapTrap &Name);
	ClapTrap& operator = (const ClapTrap &_Name);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getHitpoints(void) const;
	int	getAttackDamage(void) const;
};

#endif