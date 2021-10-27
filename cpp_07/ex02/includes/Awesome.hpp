#ifndef AWES_H
#define AWES_H

#include <iomanip>
#include <cstdlib>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
{ 
	o << rhs.get(); return o; 
}

#endif