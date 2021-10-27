#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default constructor called\n";
	type = "Animal";
}

Animal::~Animal( void )
{
	std::cout << "Destructor called\n";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Animal &Animal::operator = (const Animal &other)
{
	std::cout << "Assignation operator called\n";
	type = other.getType();
	return (*this);
}

std::string 	Animal::getType( void ) const
{
	std::cout << "getType member function called\n";
	return type;
}

void			Animal::makeSound(void) const
{
	std::cout << "We are animals!!!\n";
}
