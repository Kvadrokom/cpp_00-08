#ifndef ICE_H
# define ICE_H

# include <string>
# include <iostream>
# include <iomanip>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice:public AMateria
{
public:
	Ice(void);
	~Ice();
	Ice *clone() const;
	void use(ICharacter& target);
};

#endif