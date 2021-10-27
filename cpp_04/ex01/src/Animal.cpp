#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default Animal constructor called\n";
}

Animal::~Animal( void )
{
	std::cout << "Destructor Animal called\n";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy Animal constructor called\n";
	*this = other;
	// this->value = other.value;	
}

Animal &Animal::operator = (const Animal &other)
{
	std::cout << "Assignation Animal operator called\n";
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
