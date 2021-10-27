cp#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
private:
	std::string name;

public:	
	void		voice();	
	void		set_name(std::string name);
	std::string	get_name(void);

	~Zombie(void);
	Zombie(void);
	Zombie(std::string name);
};

Zombie* ZombieHorde(int N, std::string name);

#endif