#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Another WrongCat appears!!!\n";
	type = "Cat";
	name = "Catti";
}

WrongCat::WrongCat(const std::string Name)
{
	name = Name;
	std::cout << "WrongCat " << name << " appears!!!\n";
	type = "Cat";
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat " << name << " gone away\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miau..Miau!!!\n";
}