#ifndef CHOICE_H
# define CHOICE_H

# include <string>
# include <iostream>
# include <iomanip>
# include <stdexcept>

struct Choice
{
	int			num;
	std::string form;

	Choice(int num, std::string form);
	Choice(const Choice &other);
	Choice &operator=(const Choice &other);
};

#endif