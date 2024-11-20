#include "Harl.hpp"

int	main(void)
{
	std::string	level;
	Harl	harl;


	std::getline(std::cin, level);
	harl.complain(level);
	return (0);

}