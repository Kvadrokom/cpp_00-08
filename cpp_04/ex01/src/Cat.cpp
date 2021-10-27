#include "Cat.hpp"

Cat::Cat(void)
{
	brain = new Brain();
	type = "Cat";
	name = "Catti";
	std::cout << "Another Cat appears!!!\n";
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
	delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau..Miau!!!\n";
}

Cat::Cat(const Cat &other)
{
	std::cout << "\033[33mCopy Cat constructor called\033[0m\n";
	brain = new Brain();
	for (size_t i = 0; i < 3; i++)
		(brain->getIdeas())[i] = (other.brain->getIdeas())[i];
}

Cat &Cat::operator = (const Cat &other)
{
	for (size_t i = 0; i < 100; i++)
		(brain->getIdeas())[i] = (other.brain->getIdeas())[i];
	std::cout << "Assignation Cat operator called\n";
	return (*this);
}

void		Cat::Cat::setIdeas(const std::string& line, int i)
{
	brain->setIdeas(line, i);
}

std::string	Cat::getIdeas(int i) const
{
	return brain->getIdeas(i);
}

std::string	Cat::getName(void) const
{
	return name;
}