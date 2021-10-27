#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdexcept>

template <typename T>
class Array
{
private:
	T		*arr;
	size_t	siz;

public:
	size_t	size() const
	{
		return siz;
	}

	Array():arr(NULL), siz(0){};

	Array(size_t n):siz(n)
	{
		arr = new T[n]();
		// for (size_t i = 0; i < n; i++)
		// {
		// 	arr[i] = T();
		// }
	}

	T & operator[](size_t i)
	{
		if (i < 0 || i > this->size() - 1)
			throw std::runtime_error("Out of range");
		return arr[i];
	}

	const T & operator[](size_t i) const
	{
		if (i < 0 || i > this->size() - 1)
			throw std::runtime_error("Out of range");
		return arr[i];
	}

	Array(const Array &other)
	{
		this->arr = new T[other.size()];
		this->siz = other.size();
		for (size_t i = 0; i < other.size(); i++)
		{
			this->arr[i] = other[i];
		}
	}
	Array & operator=(const Array &other)
	{
		delete this->arr;
		this->arr = new T[other.size()];
		this->siz = other.size();
		for (size_t i = 0; i < other.size(); i++)
		{
			this->arr[i] = other->arr[i];
		}
		return *this;
	}
	~Array()
	{
		delete[] arr;
	}
};

template <typename T>
std::ostream& operator << (std::ostream& out, const Array<T>& arr)
{
	out << arr.arr;
	return out;
}

#endif