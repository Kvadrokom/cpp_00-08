#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void):i(0)
{
	arr = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
	{
		arr[i] = nullptr;
	}
}

void 		MateriaSource::learnMateria(AMateria *m)
{
	if (i == 4)
	{
		std::cout << "Can't learn more\n";
		return;
	}
	arr[i] = m->clone();
	i++;
}

AMateria* 	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (type == arr[i]->getType())
			return arr[i];
	}
	return nullptr;
}

MateriaSource::~MateriaSource()
{	
	delete [] arr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	i = other.i;
	arr = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		arr[i] = other.arr[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return *this;
	delete this;
	arr = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		arr[i] = other.arr[i];
	return *this;
}
