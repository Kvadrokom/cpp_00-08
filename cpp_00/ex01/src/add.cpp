#include "phonebook.h"

void	add(Phonebook &phonebook)
{
	std::string 	input;
	int				i;

	if (phonebook.getindex() == 8)
		i = 7;
	else
		i = phonebook.getindex();
	std::cout << "\033[32mPlease, input first name\n";
	std::cout << "\033[35m>" << ' ' << "\033[0m";
	std::cin >> input;
	phonebook.set_first_name(input, i);

	std::cout << "\033[32mPlease, input last name\n";
	std::cout << "\033[35m>" << ' ' << "\033[0m";
	std::cin >> input;
	phonebook.set_last_name(input, i);

	std::cout << "\033[32mPlease, input nick name\n";
	std::cout << "\033[35m>" << ' ' << "\033[0m";
	std::cin >> input;
	phonebook.set_nickname(input, i);

	std::cout << "\033[32mPlease, input phone number\n";
	std::cout << "\033[35m>" << ' ' << "\033[0m";
	std::cin >> input;
	phonebook.set_phone_number(input, i);

	std::cout << "\033[32mPlease, input darkest secret\n";
	std::cout << "\033[35m>" << ' ' << "\033[0m";
	std::cin >> input;
	phonebook.set_dark_secret(input, i);

	phonebook.setindex(phonebook.getindex() + 1);
	if (phonebook.getindex() > 7)
		phonebook.setindex(8);
}
