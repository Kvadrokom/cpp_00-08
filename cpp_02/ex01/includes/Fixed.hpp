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
};

std::ostream &operator<<(std::ostream &out, const Fixed &ex);

#endif