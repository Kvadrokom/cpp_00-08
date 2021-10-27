#include "Fixed.hpp"

int number_bits = 8;

Fixed::Fixed( void ): value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
	// this->value = other.value;	
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	value = other.getRawBits();
	return (*this);
}

int 	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return value;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	value = raw;
}
