#include "Brain.hpp"

Brain::Brain( void )
{
	ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		ideas[i] = "";
	std::cout << "Default Brain constructor called\n";
}

Brain::~Brain( void )
{
	delete[] ideas;
	std::cout << "Destructor Brain called\n";
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy Brain constructor called\n";
	*this = other;
}

Brain &Brain::operator = (const Brain &other)
{
	for (size_t i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Assignation Brain operator called\n";
	return (*this);
}

std::string* 	Brain::getIdeas(void) const
{
	return ideas;
}

std::string 	Brain::getIdeas(int i) const
{
	return ideas[i];
}

void			Brain::setIdeas(const std::string& line, int i)
{
	ideas[i] = line;
}
