#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default constructor called\n";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
	// this->value = other.value;	
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other)
{
	std::cout << "Assignation operator called\n";
	type = other.getType();
	return (*this);
}

std::string 	WrongAnimal::getType( void ) const
{
	std::cout << "getType member function called\n";
	return type;
}

void			WrongAnimal::setType( std::string const name )
{
	std::cout << "setRawBits member function called\n";
	type = name;
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "We are animals!!!\n";
}