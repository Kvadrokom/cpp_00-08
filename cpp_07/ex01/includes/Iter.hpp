#ifndef ITER_H
#define ITER_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

template <typename T>
void	iter(const T* array, size_t length, void (*exec)(T))
{
	for (size_t i = 0; i < length; i++)
	{
		exec(array[i]);
	}
	std::cout << '\n';
}

template <typename T>
void	print(T x)
{
	std::cout << x << "\n";
}

#endif