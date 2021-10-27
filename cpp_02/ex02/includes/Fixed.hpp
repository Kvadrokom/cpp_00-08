#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>

class Fixed
{
private:
	int					value;
	static const int	number_bits;

public:	
	Fixed( void );
	Fixed(const int &_value);
	Fixed(const float &_value);
	~Fixed(void);
	Fixed(const Fixed &other);
	Fixed& 	operator = (const Fixed &other);

	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool 	operator < (const Fixed &other) const;
	bool 	operator > (const Fixed &other) const;
	bool 	operator == (const Fixed &other) const;
	bool 	operator <= (const Fixed &other) const;
	bool 	operator >= (const Fixed &other) const;
	bool 	operator != (const Fixed &other) const;

	Fixed 	operator + (const Fixed &other) const;
	Fixed 	operator * (const Fixed &other) const;
	Fixed	operator - (const Fixed &other) const;
	Fixed	operator / (const Fixed &other) const;
	Fixed&	operator ++ ();
	Fixed	operator ++ (int);
	Fixed&	operator -- ();
	Fixed	operator -- (int);

	static Fixed&		min(Fixed &one, Fixed &two);
	const static Fixed& min(const Fixed &one, const Fixed &two);
	static Fixed& 		max(Fixed &one, Fixed &two);
	const static Fixed& max(const Fixed &one, const Fixed &two);
};

std::ostream &operator<<(std::ostream &out, const Fixed &ex);

#endif