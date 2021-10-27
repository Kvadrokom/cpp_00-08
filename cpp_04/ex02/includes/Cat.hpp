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
	Brain*		brain;

public:
	Cat(void);
	Cat(const std::string Name);
	~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);

	void		makeSound(void) const;
	void		setIdeas(const std::string& line, int i);
	std::string getIdeas(int i) const;
	std::string getName(void) const;
};

#endif