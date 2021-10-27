#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <string>
# include <iostream>
# include <iomanip>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource:public IMateriaSource
{
private:
	int			i;
	AMateria**	arr;

public:
	MateriaSource(void);
	~MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);

	void 		learnMateria(AMateria *m);
	AMateria* 	createMateria(std::string const & type);
};


#endif