#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string& Name);
	~ScavTrap();

	void attack(std::string const & target);
	void guardGate(void);
};


#endif