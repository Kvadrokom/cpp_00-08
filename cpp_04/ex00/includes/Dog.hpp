#ifndef DOG_H
# define DOG_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Animal.hpp"

class Dog:public Animal
{
private:
	std::string type;
	std::string name;

public:
	Dog(void);
	Dog(const std::string Name);
	~Dog();

	void			makeSound(void) const;
	std::string 	getType(void) const;
};

#endif