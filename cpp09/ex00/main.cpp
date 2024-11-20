#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (err_msg("not enough args or too much args", 1));
	BitcoinExchange	*BitMap = new BitcoinExchange;
	std::string DB = "data.csv";
	if (BitMap->fill_map(DB) == -1) {
        delete BitMap;
		return (-1);
    }
	if (BitMap->check_input(av[1]) == -1) {
        delete BitMap;
		return (-1);
    }
	delete BitMap;
	return (0);
}