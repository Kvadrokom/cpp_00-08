#ifndef SWAP_H
#define SWAP_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

template <typename T>
void	ft_swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}

#endif