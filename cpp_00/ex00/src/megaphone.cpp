#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void	upper_str(std::string &str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int	main(int arc, char **argv)
{
	std::string string;

	if (arc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	argv++;
	while (*argv)
	{
		string = *argv;
		upper_str(string);
		std::cout << string << ' ';
		argv++;
	}
	std::cout << std::endl;
	return (0);
}
