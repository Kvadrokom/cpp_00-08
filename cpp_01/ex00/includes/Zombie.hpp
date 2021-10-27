#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string name);
	void	voice();	
	~Zombie( void );
	Zombie( void );
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
