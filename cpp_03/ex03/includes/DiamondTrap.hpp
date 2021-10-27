#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap
{
private:
	std::string Name;

public:
	DiamondTrap(void);
	DiamondTrap(const std::string& Name);
	~DiamondTrap();

	void attack(std::string const & target);
	int getEnergy(void);
	void whoAmI();
};

#endif