#ifndef MUTANT_H
#define MUTANT_H

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <deque>
#include <stack>
#include <iterator>
#include <list>


template <typename T>
class MutantStack:public std::stack<T>
{
public:
	MutantStack<T>(const MutantStack<T>& other)
	{
		*this = other;
	}

	MutantStack<T>& operator=(const MutantStack<T>& other)
	{
		*this = other;
		return *this;
	}

	MutantStack<T>() : std::stack<T>(){};

	typedef typename std::deque<T>::iterator iterator;
	iterator 	begin() { return this->c.begin(); }
	iterator	end(){ return this->c.end(); }
};


#endif