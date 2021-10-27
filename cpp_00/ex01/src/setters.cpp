#include "phonebook.h"

void	Phonebook::setindex(int index)
{
	this->index = index;
}

void	Phonebook::set_first_name(std::string string, int i)
{
	this->contact[i].first_name = string;
}

void	Phonebook::set_last_name(std::string string, int i)
{
	this->contact[i].last_name = string;
}

void	Phonebook::set_nickname(std::string string, int i)
{
	this->contact[i].nickname
	 = string;
}

void	Phonebook::set_phone_number(std::string string, int i)
{
	this->contact[i].phone_number = string;
}

void	Phonebook::set_dark_secret(std::string string, int i)
{
	this->contact[i].dark_secret = string;
}
