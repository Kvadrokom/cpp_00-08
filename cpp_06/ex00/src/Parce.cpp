#include "Parce.hpp"

Parce::Parce():num_ch(0), dot(0), if_char(0), f(0),
			minus(0), plus(0), plus_minus(0), wrong_in(0),
			alfa(0)
{
	this->arr[0] = "nan";
	this->arr[1] = "-inff";
	this->arr[2] = "+inff";
	this->arr[3] = "-inf";
	this->arr[4] = "+inf";
	this->arr[5] = "-nan";
	this->arr[6] = "inf";
	this->arr[7] = "inff";
	this->arr[8] = "-nan";
	this->arr[9] = "-nanf";
	this->arr[10] = "nanf";
	this->arr[11] = "+nanf";
	this->arr[12] = "+nan";
};


void	print(int num)
{
	std::cout << "int: ";
	std::cout << num << '\n';
}

void	print(char num)
{
	std::cout << "char: ";
	std::cout << "\'" << num << "\'"<< '\n';
}

void	print(float num)
{
	std::cout << "float: ";
	std::cout << std::setprecision(1) << std::fixed << num << 'f' << '\n';
}

void	print(double num)
{
	std::cout << "double: ";
	std::cout << std::setprecision(1) << std::fixed << num << '\n';
}

void	print_err(std::string s1, std::string s2)
{
	std::cout << s1 << ": " << s2 << "\n";
}

int		if_overflow(std::string s, int num)
{
	if (num > 0)
	{
		std::stringstream stream;
		long long int nbm;
		stream << s;
		stream >> nbm;
		if (nbm > std::numeric_limits<int>::max() ||
			nbm < std::numeric_limits<int>::min())
		return 1;
	}
	return 0;
}

int		if_overflow(std::string s, float num)
{
	if (num > 0)
	{
		double num_;
		std::stringstream stream;
		stream << s;
		stream >> num_;

		if (fabs(num_) > std::numeric_limits<float>::max() ||
			fabs(num_) < std::numeric_limits<float>::min())
		return 1;
	}
	return 0;
}

int		if_overflow(std::string s, double num)
{
	errno = 0;
	if (num > 0)
	{
		num = strtod(s.c_str(), NULL);
		if (errno == ERANGE)
			return 1;
	}
	return 0;
}