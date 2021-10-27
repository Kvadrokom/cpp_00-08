#ifndef CURE_H
# define CURE_H

# include <string>
# include <iostream>
# include <iomanip>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Cure:public AMateria
{
public:
	Cure(void);
	~Cure();

	Cure *clone() const;
	void use(ICharacter& target);
};

#endif