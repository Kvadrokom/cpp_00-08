#include "Parce.hpp"

int	main(int arc, char **argv)
{
	Parce 				prc;

	if (arc != 2)
		return 0;
	std::string s = argv[1];
	for (size_t i = 0; i < s.size(); i++)
	{
		if (ft_isalpha(s[i]))
			prc.alfa++;
		if (s[i] == '.')
			prc.dot++;
		if (s[i] == 'f')
			prc.f++;
		if (s[i] == '-')
			prc.minus++;
		if (s[i] == '+')
			prc.plus++;
		if (prc.minus == 1 && prc.plus == 1)
			prc.plus_minus = 1;
		if ((s[i] == '-' || s[i] == '+') && i != 0)
			prc.wrong_in = 1;
		if (prc.minus > 1 || prc.plus > 1 || prc.dot > 1 || prc.alfa > 1)
			prc.wrong_in = 1;
	}
	prc.last_ch = s[s.size()];
	if (not_number(s, prc) == 0)
		return 0;
	if (prc.wrong_in == 1)
	{
		print_wrong_in();
		return 0;
	}
	if (is_char(s))
	{
		char c;

		prc.myString << s;
		prc.myString >> c;
		std::cout << "char: ";
		std::cout << "\'" << c << "\'" << '\n';
		std::cout << "int: ";
		std::cout << static_cast<int>(c) << '\n';
		std::cout << "float: ";
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(c) << 'f' << '\n';
		std::cout << "double: ";
		std::cout << std::setprecision(1) << std::fixed << static_cast<double>(c) << '\n';
		return 0;
	}

	if (is_int(s))
	{




		
		int c;

		std::string ss = s;
		prc.myString << s;
		if (if_overflow(s, 1))
		{
			print_err("char: ", "impossible");
			print_err("int: ", "impossible");
		}
		else
		{
			prc.myString >> c;
			if (!ft_isprint(static_cast<char>(c)))
			{
				print_err("char: ", "Non displayable");
				print(c);
				print(static_cast<float>(c));
				print(static_cast<double>(c));
				return 0;
			}
			else
			{
				print(static_cast<char>(c));
				print(c);
				print(static_cast<float>(c));
				print(static_cast<double>(c));
				return 0;
			}
		}
		long long int cc;
		prc.myString >> cc;
		if (if_overflow(ss, 1.0f))
			print_err("float: ", "impossible");
		else
			print(static_cast<float>(cc));
		if (if_overflow(ss, 1.0))
			print_err("double: ", "impossible");
		else
			print(static_cast<double>(cc));
	}
	else if (is_float(prc, s))
	{
		float c;
		s.resize(s.size() - 1);
		prc.myString << s;
		if (if_overflow(s, 1))
		{
			print_err("char: ", "impossible");
			print_err("int: ", "impossible");
		}
		else
		{
			prc.myString >> c;
			if (!ft_isprint(static_cast<char>(c)))
			{
				print_err("char: ", "Non displayable");
				print(static_cast<int>(c));
			}
			else
				{
					print(static_cast<char>(c));
					print(static_cast<int>(c));
				}
		}		
		if (if_overflow(s, 1.0f))
			print_err("float: ", "impossible");
		else
			print(c);
		if (if_overflow(s, 1.0))
			print_err("double: ", "impossible");
		else
			print(static_cast<double>(c));
	}

	else if (is_double(prc, s))
	{
		double c;

		prc.myString << s;
		prc.myString >> c;
		if (if_overflow(s, 1))
		{
			print_err("char: ", "impossible");
			print_err("int: ", "impossible");
		}
		else
		{
			if (!ft_isprint(static_cast<char>(c)))
			{
				print_err("char: ", "Non displayable");
				print(static_cast<int>(c));
			}
			else
			{
				print(static_cast<char>(c));
				print(static_cast<int>(c));
			}
		}		
		if (if_overflow(s, 1.0f))
			print_err("float: ", "impossible");
		else
			print(static_cast<float>(c));
		if (if_overflow(s, 1.0))
			print_err("double: ", "impossible");
		else
			print(c);
		return 0;
	}
	else
		print_wrong_in();
	return 0;
}
