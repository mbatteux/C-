#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int _n;
	static const int	_d = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &src);
	Fixed const	&operator=(Fixed const &rhs);

	int getRawBits(void)const;
	void setRawBits(int const raw);
};

#endif