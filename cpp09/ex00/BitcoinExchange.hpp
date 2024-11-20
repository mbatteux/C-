#pragma once
# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <iomanip>
# include <cmath>

class BitcoinExchange
{
private:
	std::map<std::string, double>	map;
public:
	BitcoinExchange(void);
	~BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange &src);
	BitcoinExchange	&operator=(const BitcoinExchange &src);
	const std::map<std::string, double> 	&get_map(void) const;
	int	fill_map(const std::string &file);
	std::string get_date(std::string line, char c);
	double	get_value(std::string line, char c);
	int		check_input(std::string input);
	int		error_case(std::string &line, const std::string &date, const double &value);
};

int	err_msg(std::string err_name, int rtn);