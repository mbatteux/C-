#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>
# include <ostream>

class Fixed
{
private:
	int _n;
	static const int	_d = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(float const a);
	Fixed(int const b);
	Fixed(Fixed const &src);
	Fixed const	&operator=(Fixed const &rhs);

	int getRawBits(void)const;
	void setRawBits(int const raw);
	int	toInt(void) const;
	float	toFloat(void)const;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs);

#endif