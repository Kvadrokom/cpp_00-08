#include "Cure.hpp"

Cure::Cure(void)
{
	type = "cure";
};

Cure* 	Cure::clone(void) const
{
	Cure *clone = new Cure();
	clone->setType(type);
	return clone;
}

void 	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called " << "\n";
};
