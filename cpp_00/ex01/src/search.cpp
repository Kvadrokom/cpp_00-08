#include "phonebook.h"

void	resize(std::string &string)
{
	string.resize(9);
	string.append(1, '.');
}

void	search(Phonebook &phonebook)
{
	int 		i = 0;
	int 		j = phonebook.getindex();
	std::string string;

	if (j == 0)
	{
		std::cout << "\033[33mPhonebook is empty. Use 'ADD' command\n";
		return ;
	}
	while (i++ < 45)
		std::cout << "\033[5m" << '-';
	std::cout << std::endl;
	std::cout << '|' << "   Index  ";
	std::cout << '|' << "Fisrt name";
	std::cout << '|' << " Last name";
	std::cout << '|' << " Nick name" << '|';
	std::cout << std::endl;
	i = 0;
	while (i++ < 45)
		std::cout << '-';
	std::cout << std::endl;
	i = 0;
	while (i < j)
	{
		std::cout << '|';
		std::cout << std::setw(10) << i + 1;
		std::cout << '|';
		string = phonebook.get_first_name(i);
		if (string.length() > 10)
			resize(string);
		std::cout << std::setw(10) << string;
		std::cout << '|';
		string = phonebook.get_last_name(i);
		if (string.length() > 10)
			resize(string);
		std::cout << std::setw(10) << string;
		std::cout << '|';
		string = phonebook.get_nickname(i);
		if (string.length() > 10)
			resize(string);
		std::cout << std::setw(10) << string;
		std::cout << '|';
		std::cout << std::endl;
		i++;
	}
	i = 0;
	while (i++ < 45)
		std::cout << '-';
	std::cout << std::endl;
}
