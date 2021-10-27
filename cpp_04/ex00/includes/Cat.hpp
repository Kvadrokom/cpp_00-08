#ifndef CAT_H
# define CAT_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Animal.hpp"

class Cat:public Animal
{
private:
	std::string type;
	std::string name;

public:
	Cat(void);
	Cat(const std::string Name);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void		makeSound(void) const;
	std::string getType( void ) const;
};

#endif