#pragma once
# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <ctime>

class Span
{
private:
	unsigned int	_n;
	std::vector<unsigned int> _Vec;
	Span();
public:
	~Span();
	Span(unsigned int n);
	Span(const Span &src);
	Span	&operator=(const Span &rhs);
	unsigned int	getN(void) const;
	std::vector<unsigned int> getVec(void) const;
	void	addNumber(unsigned int new_n);
	void	viewVec(void);
	unsigned int		shortestSpan(void);
	unsigned int		longestSpan(void);
	void	addMore(unsigned int max);
};

