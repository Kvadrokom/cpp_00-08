#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <string>
# include <iostream>
# include <iomanip>
# include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
private:
	std::string type;
	std::string name;

public:
	WrongCat(void);
	WrongCat(const std::string Name);
	~WrongCat();

	void	makeSound(void) const;
};

#endif