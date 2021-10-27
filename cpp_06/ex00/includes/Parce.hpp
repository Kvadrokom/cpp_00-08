#ifndef PARCE_H
#define PARCE_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <errno.h>
#include <cmath>

struct Parce
{
	int					num_ch;
	int					dot;
	int					if_char;
	int					f;
	int					minus;
	int					plus;
	int					plus_minus;
	int					wrong_in;
	char				last_ch;
	id_t				alfa;
	std::string 		arr[13];
	std::stringstream 	myString;

	Parce();
};

int		is_char(std::string &s);
int		is_int(std::string &s);
int		is_float(Parce &prc, std::string &s);
int		is_double(Parce &prc, std::string &s);
char	ft_isdigit(char c);
char	ft_isprint(char c);
int		if_overflow(Parce &prc, std::string &s);
void	print(int num);
void	print(char num);
void	print(float num);
void	print(double num);
void	print_err(std::string s1, std::string s2);
int		if_overflow(std::string s, int num);
int		if_overflow(std::string s, float num);
int		if_overflow(std::string s, double num);
void	print_inf(std::string str);
void	print_wrong_in();
char	ft_isalpha(char c);
int 	not_number(std::string s, Parce &prc);

#endif