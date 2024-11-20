#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float const a) : _n(roundf(a * (1 << _d)))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(int const b) : _n(b << _d)
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed const &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
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