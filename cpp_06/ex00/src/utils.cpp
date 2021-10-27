#include "Parce.hpp"

char	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char		ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	is_char(std::string &s)
{
	if (s.size() == 1 && !ft_isdigit(s[0]))
	{	
		return 1;
	}
	return 0;
}
int	is_int(std::string &s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (!ft_isdigit(s[i]) && s[i] != '-' && s[i] != '+')
			return 0;
	}
	return 1;
}

int	is_float(Parce &prc, std::string &s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (!ft_isdigit(s[i]) && (s[i] != 'f' && s[i] != '.'
			&& s[i] != '-' && s[i] != '+'))
			return 0;
	}
	if (prc.f != 1 && prc.last_ch != 'f')
		return 0;
	return 1;
}

int	is_double(Parce &prc, std::string &s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (!ft_isdigit(s[i]) && s[i] != '.'
			&& s[i] != '-' && s[i] != '+')
			return 0;
	}
	if (prc.f > 0 || prc.dot != 1)
		return 0;
	return 1;
}

void	print_inf(std::string str)
{
	std::cout << "char: ";
	std::cout << "impossible" << '\n';

	std::cout << "int: ";
	std::cout << "impossible" << '\n';

	std::cout << "float: ";
	std::cout << str << 'f' << '\n';

	std::cout << "double: ";
	std::cout << str << '\n';	
}

void	print_wrong_in()
{
	std::cout << "char: ";
	std::cout << "impossible" << '\n';

	std::cout << "int: ";
	std::cout << "impossible" << '\n';

	std::cout << "float: ";
	std::cout << "impossible" << '\n';

	std::cout << "double: ";
	std::cout << "impossible" << '\n';
}

int	not_number(std::string s, Parce &prc)
{
	for (size_t i = 0; i < 13; i++)
	{
		int a = s.compare(prc.arr[i]);
		if (a == 0)
		{
			switch (i)
			{
			case 0:
				print_inf("nan");
				return 0;
			case 1:
				print_inf("-inf");
				return 0;
			case 2:
				print_inf("+inf");
				return 0;
			case 3:
				print_inf("-inf");
				return 0;
			case 4:
				print_inf("inf");
				return 0;
			case 5:
				print_inf("-nan");
				return 0;
			case 6:
				print_inf("inf");
				return 0;
			case 7:
				print_inf("inf");
				return 0;
			case 8:
				print_inf("-nan");
				return 0;
			case 9:
				print_inf("-nan");
				return 0;
			case 10:
				print_inf("nan");
				return 0;
			case 11:
				print_inf("+nan");
				return 0;
			case 12:
				print_inf("+nan");
				return 0;
			}
		}
	}
	return 1;
}