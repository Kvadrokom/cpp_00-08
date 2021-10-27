#include "AMateria.hpp"

AMateria::AMateria(void){};

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using something on " << target.getName() << "\n";
}

void AMateria::setType(const std::string& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
	type = other.getType();
}

AMateria& AMateria:: operator=(const AMateria& other)
{
	type = other.getType();
	return *this;
}