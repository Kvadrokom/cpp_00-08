#ifndef SPAN_H
#define SPAN_H

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <deque>

class span
{
private:
	size_t 			N;
	std::deque<int>	deq;
	size_t			size;

	public : span(size_t n);
	span(const span& other);
	span &operator=(const span &other);
	int operator[](size_t i);
	int operator[](size_t i) const;
	~span();

	void					setN(size_t n);
	std::deque<int>& 		getDeq();
	const std::deque<int>& 	getDeq() const;
	size_t 					getN() const;
	void 					addNumber(const int n);
	size_t					shortestSpan();
	size_t					longestSpan();
	void					spanfill(std::deque<int>::iterator it1,
									std::deque<int>::iterator it2, int val);
};

std::ostream &operator<<(std::ostream &out, const span &other);

#endif