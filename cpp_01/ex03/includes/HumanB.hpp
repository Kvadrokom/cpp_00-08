#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon				*weapon_type;
	std::string 		name;

public:
	void				attack();
	HumanB(std::string name);
	HumanB();
	~HumanB();
	void setWeapon(Weapon &weapon);
};

#endif