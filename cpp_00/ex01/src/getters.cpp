#include "phonebook.h"

int 	Phonebook::getindex()
{
	return (this->index);
}

std::string Phonebook::get_first_name(int i)
{
	return (this->contact[i].first_name);
}

std::string Phonebook::get_last_name(int i)
{
	return (this->contact[i].last_name);
}

std::string Phonebook::get_nickname(int i)
{
	return (this->contact[i].nickname);
}

std::string Phonebook::get_phone_number(int i)
{
	return (this->contact[i].phone_number);
}

std::string Phonebook::get_dark_secret(int i)
{
	return (this->contact[i].dark_secret);
}
