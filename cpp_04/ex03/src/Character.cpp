#include "Character.hpp"

Character::Character(void) : idx(0), name("Noname")
{
	inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = 0;
	}
}

Character::Character(const std::string& _name) : idx(0), name(_name)
{
	inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i] != 0)
			delete inventory[i];
	}
	delete[] inventory;
}

std::string const& 	Character::getName(void) const
{
	return name;
}

void 				Character::equip(AMateria* m)
{
	if (idx == 4)
	{
		std::cout << "It's full, no more spase\n";
		return;
	}
	for (int i = 0; i <= idx; i++)
	{
		if (inventory[i] == m)
		{
			std::cout << "I have this item already\n";
			return;
		}
	}
	inventory[idx] = m;
	idx++;
}

void 				Character::unequip(int idx)
{
	if (idx == 0)
		return;
	inventory[idx] = 0;	
	idx--;
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx < 0)
	{
		std::cout << "Can't use, this id inventory is illegal\n";
		return;
	}
	if (idx >= this->idx)
	{
		std::cout << "Can't use, this id inventory is empty or more then volume\n";
		return;
	}
	inventory[idx]->use(target);
}

int const& 	Character::getIdx() const
{
	return idx;
}

Character::Character(const Character &other)
{
	idx = other.getIdx();
	inventory = new AMateria*[4];
	name = other.getName();
	for (size_t i = 0; i < 4; i++)
		inventory[i] = other.inventory[i];
}

Character& Character::operator=(const Character &other)
{
	if (this == &other)
		return *this;
	idx = other.getIdx();
	inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		inventory[i] = other.inventory[i];
	return *this;
}
