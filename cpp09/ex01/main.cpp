#include "RPN.hpp"

//fini mais peut etre revoir le parseur je pense qu'il est un peu trop strict
int	main(int ac, char **av)
{
	if (ac != 2)
		return (err_msg("Error: Not enough or too much args", -1));
	if (check_args(av[1]) == false)
		return (err_msg("Error: Bad input args", -1));
	if (rpncalcul(av[1]) == false)
	return (0);
}