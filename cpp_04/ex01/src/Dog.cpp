#include "Dog.hpp"

Dog::Dog(void)
{
	brain = new Brain();
	type = "Dog";
	name = "Doggi";
	std::cout << "Another Dog appears!!!\n";
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
	delete brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Gav..Gav!!!\n";
}

Dog::Dog(const Dog &other)
{
	std::cout << "\033[31mCopy Cat constructor called\033[0m\n";
	brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		(brain->getIdeas())[i] = (other.brain->getIdeas())[i];
	name = other.getName();
}

Dog &Dog::operator = (const Dog &other)
{
	for (size_t i = 0; i < 100; i++)
		(brain->getIdeas())[i] = (other.brain->getIdeas())[i];
	std::cout << "Assignation Dog operator called\n";
	return (*this);
}

void		Dog::Dog::setIdeas(const std::string& line, int i)
{
	brain->setIdeas(line, i);
}

std::string	Dog::getIdeas(int i) const
{
	return brain->getIdeas(i);
}

std::string	Dog::getName(void) const
{
	return name;
}