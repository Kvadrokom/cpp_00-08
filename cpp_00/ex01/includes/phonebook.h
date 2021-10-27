#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include "iomanip"

class Phonebook
{
	class Contact
	{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string dark_secret;
	};

public:
	int 		getindex();
	std::string get_first_name(int i);
	std::string get_last_name(int i);
	std::string get_nickname(int i);
	std::string get_phone_number(int i);
	std::string get_dark_secret(int i);

	void		set_first_name(std::string string, int i);
	void 		set_last_name(std::string string, int i);
	void 		set_nickname(std::string string, int i);
	void 		set_phone_number(std::string string, int i);
	void 		set_dark_secret(std::string string, int i);
	void		setindex(int index);

	Phonebook();

private:
	int			index;
	Contact		contact[8];
};
void	add(Phonebook &phonebook);
void	search(Phonebook &phonebook);
void	print_contact(Phonebook &phonebook);
void	resize(std::string &string);

#endif
