#include "Ice.hpp"

Ice::Ice(void)
{
	type = "ice";
	// std::cout << "Ice constructor called " << "\n";
}

Ice* 	Ice::clone(void) const
{
	Ice *clone = new Ice();
	clone->setType(type);
	return clone;
}

void 	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *\n";
}

Ice::~Ice(){};