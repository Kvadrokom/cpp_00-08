#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon				&weapon_type_;
	std::string 		name;

public:
	void				attack();
	HumanA(std::string name, Weapon &weapon_type);
	~HumanA();
};

#endif
