#ifndef AWES_H
#define AWES_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Awesome 
{
	public:
		Awesome(int n) : _n(n){};
		bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
		bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
		bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
		bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
		bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
		bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }

		int getN() const { return _n; }

	private:
		int _n;
};

std::ostream& operator << (std::ostream& out, const Awesome& d)
{
	out << d.getN();
	return out;
}

#endif