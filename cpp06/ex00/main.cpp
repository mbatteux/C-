#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::cout.precision(10);
		ScalarConverter::convert(argv[1]);
	}
	return (0);
}