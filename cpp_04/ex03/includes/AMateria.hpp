#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>
# include <iomanip>
class AMateria;
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria(void);
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &other);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		void setType(const std::string& type);

		virtual ~AMateria(){};
};

#endif