#include "Fixed.hpp"

const int Fixed::number_bits = 8;

Fixed::Fixed( void ): value(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int& _value ): value(_value << number_bits)
{
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float& _value ): value(roundf(_value * (1 << number_bits)))
{
	// std::cout << "Float constructor called\n";
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	// this->value = other.value;
	*this = other;
	// std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator = (const Fixed &other)
{
	// std::cout << "Assignation operator called\n";
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

bool 	Fixed::operator < (const Fixed &other) const
{
	return (value < other.getRawBits());
}

bool 	Fixed::operator > (const Fixed &other) const
{
	return (other.getRawBits() < value);
}

bool 	Fixed::operator == (const Fixed &other) const
{
	return !(*this < other || *this > other);
}

bool 	Fixed::operator != (const Fixed &other) const
{
	return !(*this == other);
}

Fixed 	Fixed::operator + (const Fixed &other) const
{
	return value + other.getRawBits();
}

Fixed 	Fixed::operator - (const Fixed &other) const
{
	return value - other.getRawBits();
}

Fixed 	Fixed::operator * (const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(roundf((long)(value * other.getRawBits()) >> number_bits));
	return tmp;
}

Fixed 	Fixed::operator / (const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(roundf((long)(value << number_bits) / other.getRawBits()));
	return tmp;
}

Fixed&	Fixed::operator ++ ()
{
	value = value + 1;
	return *this;
}

Fixed	Fixed::operator ++ (int)
{
	Fixed tmp = *this;
	value = value + 1;
	return tmp;
}

Fixed&	Fixed::operator -- ()
{
	value = value - 1;
	return *this;
}

Fixed	Fixed::operator -- (int)
{
	Fixed tmp = *this;
	value = value - 1;
	return tmp;
}

Fixed& Fixed::min(Fixed &one, Fixed &two)
{
	return one < two ? one : two;
}

const Fixed& Fixed::min(const Fixed &one, const Fixed &two)
{
	return one < two ? one : two;
}

Fixed& Fixed::max(Fixed &one, Fixed &two)
{
	return one > two ? one : two;
}

const Fixed& Fixed::max(const Fixed &one, const Fixed &two)
{
	return one > two ? one : two;
}
