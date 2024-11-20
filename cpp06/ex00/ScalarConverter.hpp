#pragma once
# include <iostream>
# include <stdlib.h>
# include <cmath>
# include <limits>

class ScalarConverter
{
private:
	ScalarConverter(void);
	~ScalarConverter(void);
public:
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	static void	convert(std::string a);
};

int verif_string(std::string a);