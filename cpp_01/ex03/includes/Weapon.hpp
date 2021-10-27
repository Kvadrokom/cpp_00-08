#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>
# include <iomanip>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string weapon);
	Weapon();
	~Weapon();
	std::string const&	getType();
	void				setType(std::string weapon);
};

#endif