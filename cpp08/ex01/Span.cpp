#include "Span.hpp"

Span::Span(void) : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::~Span(void)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span	&Span::operator=(const Span &rhs)
{
	this->_n = rhs.getN();
	this->_Vec = rhs.getVec();
	return (*this);
}

unsigned int	Span::getN(void) const
{
	return (this->_n);
}

std::vector<unsigned int> Span::getVec(void) const
{
	return(this->_Vec);
}

void	Span::addNumber(unsigned int new_n)
{
	if (this->_Vec.size() >= this->_n)
		throw std::out_of_range("The Span is full");
	this->_Vec.push_back(new_n);
}

void	Span::viewVec(void)
{
	std::vector<unsigned int>::iterator it;

	for (it = this->_Vec.begin(); it != this->_Vec.end(); ++it)
	{
		std::cout << (*it) << " ";
	}
	std::cout << std::endl;
}

unsigned int		Span::shortestSpan(void)
{
	if (this->_Vec.size() < 2)
		throw std::length_error("The Span need to contain at least 2 integer");

	std::vector<unsigned int> vectmp = this->_Vec;
	std::sort(vectmp.begin(), vectmp.end());
	return (vectmp[1] - vectmp[0]);
}

unsigned int		Span::longestSpan(void)
{
	if (this->_Vec.size() < 2)
		throw std::length_error("The Span need to contain at least 2 integer");

	std::vector<unsigned int> vectmp = this->_Vec;
	std::sort(vectmp.begin(), vectmp.end());
	return (vectmp[vectmp.size() - 1] - vectmp[0]);
}

void	Span::addMore(unsigned int max)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < max; i++)
	{
		int random_number = std::rand() % max;
		addNumber(random_number);
	}
}	