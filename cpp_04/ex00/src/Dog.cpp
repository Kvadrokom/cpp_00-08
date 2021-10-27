#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Another Dog appears!!!\n";
	type = "Dog";
	name = "Doggi";
}

Dog::Dog(const std::string Name)
{
	std::cout << "Dog " << name << " appears!!!\n";
	type = "Dog";
	name = Name;
}

Dog::~Dog( void )
{
	std::cout << "Dog " << name << " gone away\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Gav..Gav!!!\n";
}

std::string 	Dog::getType( void ) const
{
	std::cout << "getType member function called\n";
	return type;
}
