#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>
# include <iomanip>

class Animal
{
private:
	std::string type;

public:
	Animal(void);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	virtual std::string 	getType(void) const;
	virtual void			makeSound() const;
};

#endif