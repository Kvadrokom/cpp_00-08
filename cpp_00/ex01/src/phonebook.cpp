#include "phonebook.h"

Phonebook::Phonebook()
{
	this->index = 0;
}

int	main(int arc, char **argv)
{
	std::string		input;
	Phonebook		phonebook;

	(void)arc;
	(void)argv;
	while (1)
	{
		std::cout << "\033[1;35mphonebook $ \033[0m";
		std::cin >> input;
		if (input == "ADD")
		{
			add(phonebook);
		}
		else if (input == "SEARCH")
		{
			search(phonebook);
			if (phonebook.getindex())
				print_contact(phonebook);
		}
		else if (input == "EXIT")
			return (0);
		else if (std::cin.eof())
			return (0);
		else
			std::cout << "\033[33mUse 'ADD', 'SEARCH' or 'EXIT' command\n";
	}
	return (0);
}
