#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}

int	verif_string(std::string a)
{
	std::string b = "0123456789.f-+";
	size_t	j = 0;

	for (size_t i = 0; i < a.length();)
	{
		if (a[i] != b[j])
			j++;
		else if (a[i] == b[j])
		{
			j = 0;
			i++;
		}
		if (j == b.length())
			return (-1);
	}
	return (0);
}

void ScalarConverter::convert(std::string a)
{
	int		i = 0;
	double	d = 0.0;
	float	f = 0.0;

	if (a.compare("-inff") == 0)
		f = -INFINITY;
	else if (a.compare("+inff") == 0)
		f = +INFINITY;
	else if (a.compare("+inf") == 0)
		d = +INFINITY;
	else if (a.compare("-inf") == 0)
		d = -INFINITY;
	else if (a.compare("nan") == 0)
		d = std::numeric_limits<double>::quiet_NaN();
	else
	{
		if (verif_string(a) == -1 && a.length() != 1)
		{
			std::cout << "error string" <<std::endl;
			return ;
		}
	}
	d = atof(a.c_str());
	i = atoi(a.c_str());
	if (a.find('.') <= a.length() || f == -INFINITY || f == +INFINITY || d == -INFINITY || d == +INFINITY || std::isnan(d)) //si la string est un double ou un float
	{
		if (d - static_cast<int>(d) == 0)
		{
			if (d >= 32.0 && d <= 126.0)
				std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
			else 
				std::cout << "char: Impossible" << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl;
			std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
			std::cout << "double: " << d << ".0" << std::endl;
		}
		else
		{
			std::cout << "char: Impossible" << std::endl;
			if (d == -INFINITY || d == +INFINITY || std::isnan(d))
				std::cout << "int: Impossible" << std::endl;
			else
				std::cout << "int: " << static_cast<int>(d) << std::endl;
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}
	}
	else if (i) //si la string est un int
	{
		if (i >= 32 && i <= 126)
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else 
			std::cout << "char: Impossible" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
		
	}
	else if (!i) //si la string est un caractere simple
	{
		std::cout << "char: '" << a[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(a[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(a[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(a[0]) << ".0" << std::endl;
	}
}
