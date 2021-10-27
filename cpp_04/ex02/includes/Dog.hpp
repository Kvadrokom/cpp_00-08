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
	Brain		*brain;

public:
	Dog(void);
	// Dog(Brain& mozg);
	Dog(const std::string Name);
	~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);

	void		makeSound(void) const;
	void		setIdeas(const std::string& line, int i);
	std::string getIdeas(int i) const;
	std::string getName(void) const;
};

#endif