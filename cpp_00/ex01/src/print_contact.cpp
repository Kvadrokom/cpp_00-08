#include "phonebook.h"

void	print_contact(Phonebook &phonebook)
{
	std::string 	input;
	int				i = 0;
	bool			flag = false;

	std::cout << "\033[32mPlease, input index\n" << "\033[0m";
	std::cout << "\033[35m>" << ' ' << "\033[0m" << ' ';
	std::cin >> input;
	while (i < phonebook.getindex())
	{
		if (input == std::to_string(i + 1))
		{
			flag = true;
			std::cout << "Index         " << "  " << std::setw(20) << i + 1;
			std::cout << std::endl;
			std::cout << "Fisrt name    " << "  " << std::setw(20) << phonebook.get_first_name(i);
			std::cout << std::endl;
			std::cout << "Last name     " << "  " << std::setw(20) << phonebook.get_last_name(i);
			std::cout << std::endl;
			std::cout << "Nick name     " << "  " << std::setw(20) << phonebook.get_nickname(i);
			std::cout << std::endl;
			std::cout << "Phone number  " << "  " << std::setw(20) << phonebook.get_phone_number(i);
			std::cout << std::endl;
			std::cout << "Darkest secret" << "  " << std::setw(20) << phonebook.get_dark_secret(i);
			std::cout << std::endl;
			return ;
		}
		i++;
	}
	if (flag == false)
	{
		std::cout << "\033[33mWrong input";
		std::cout << std::endl;
		return ;
	}
}
