#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{

}

Fixed::Fixed(float const a) : _n(roundf(a * (1 << _d)))
{

}

Fixed::Fixed(int const b) : _n(b << _d)
{

}

Fixed::~Fixed(void)
{

}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed const &Fixed::operator=(Fixed const &rhs)
{
	this->_n = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs)
{
	if (this->_n > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs)
{
	if (this->_n < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	if (this->_n >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	if (this->_n <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs)
{
	if (this->_n == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	if (this->_n != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->_n++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	tmp._n = this->_n++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	tmp._n = this->_n--;
	return (tmp);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return ((Fixed)a > b ? a : b);
}

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return ((Fixed)a < b ? a : b);
}

int	Fixed::getRawBits(void) const
{
	return(this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_n >> _d);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_n) / (1 << _d));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}