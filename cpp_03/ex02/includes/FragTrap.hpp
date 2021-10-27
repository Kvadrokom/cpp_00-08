#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

public:
	FragTrap(void);
	FragTrap(const std::string& Name);
	~FragTrap();

	void highFivesGuys(void);
	void attack(std::string const & target);
};

#endif