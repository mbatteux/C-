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
	bool	operator>(Fixed const &rhs);
	bool	operator<(Fixed const &rhs);
	bool	operator>=(Fixed const &rhs);
	bool	operator<=(Fixed const &rhs);
	bool	operator==(Fixed const &rhs);
	bool	operator!=(Fixed const &rhs);
	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	static Fixed	&max(Fixed &a, Fixed &b);
	static Fixed	&min(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	int getRawBits(void)const;
	void setRawBits(int const raw);
	int	toInt(void) const;
	float	toFloat(void)const;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs);

#endif