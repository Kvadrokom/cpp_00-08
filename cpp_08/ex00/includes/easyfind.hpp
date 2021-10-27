#ifndef EASYF_H
#define EASYF_H

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <deque>


class easyfind_except:public std::exception
{

public:
	const char* what() const throw()
	{ 
		return "Number not found";
	}
};

template <typename T>
typename T::iterator	easyfind(T &container, int num)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw easyfind_except();
	return it;
}

#endif