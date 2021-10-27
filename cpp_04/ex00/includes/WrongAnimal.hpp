#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>
# include <iomanip>

class WrongAnimal
{
private:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	~WrongAnimal();

	std::string 	getType(void) const;
	void			setType( std::string const name );
	void	makeSound() const;
};

#endif