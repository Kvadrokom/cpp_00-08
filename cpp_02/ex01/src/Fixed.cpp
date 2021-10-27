#include "Fixed.hpp"

const int Fixed::number_bits = 8;

Fixed::Fixed( void ): value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int& _value ): value(_value << number_bits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float& _value ): value(roundf(_value * (1 << number_bits)))
{
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	// this->value = other.value;
	*this = other;	
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	value = other.getRawBits();
	return (*this);
}

int 	Fixed::getRawBits( void ) const
{
	return value;
}

void	Fixed::setRawBits( int const raw )
{
	value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)value / (1 << number_bits));
}

int		Fixed::toInt( void ) const
{
	return (roundf((float)value / (1 << number_bits)));
}

std::ostream &operator<<(std::ostream &out, const Fixed &ex)
{
	out << ex.toFloat();
	return out;
}
