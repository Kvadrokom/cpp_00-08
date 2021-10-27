#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Another Cat appears!!!\n";
	type = "Cat";
	name = "Catti";
}

Cat::Cat(const std::string Name)
{
	name = Name;
	std::cout << "Cat " << name << " appears!!!\n";
	type = "Cat";
}

Cat::~Cat( void )
{
	std::cout << "Cat " << name << " gone away\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau..Miau!!!\n";
}

Cat::Cat(const Cat &other)
{
	type = other.type;
	name = other.name;
}

Cat& Cat::operator=(const Cat &other)
{
	type = other.name;
	name = other.type;
	return *this;
}

std::string 	Cat::getType( void ) const
{
	std::cout << "getType member function called\n";
	return type;
}