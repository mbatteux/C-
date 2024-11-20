#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &src)
{
	this->map = src.get_map();
	return (*this);
}

//renvoie la map
const std::map<std::string, double> 	&BitcoinExchange::get_map(void) const
{
	return (this->map);
}

int	BitcoinExchange::fill_map(const std::string &file)
{
	std::ifstream ifs(file.c_str());
	std::string line;

	if (ifs.is_open() == false)
		return (err_msg("Error: Data base is missing.", -1));
	getline(ifs, line);
	while (getline(ifs, line))
	{
		if (get_date(line, ',').empty())
			return (err_msg("Error: Date Base format invalid.", -1));
		if (get_value(line, ',') == -1)
			return (err_msg("Error: Date Base format invalid.", -1));
		this->map.insert(std::make_pair(get_date(line, ','), get_value(line, ',')));
	}
	return (0);
}

std::string BitcoinExchange::get_date(std::string line, char c)
{
	if (line.find(c, 0) == line.npos)
		return ("");
	line = line.substr(0, line.find(c, 0));
	return (line);
}

double	BitcoinExchange::get_value(std::string line, char c)
{
	if (line.find(c, 0) == line.npos)
		return (-1);
	line = line.substr(line.find(c, 0) + 1, line.length());
	double	value;
	std::istringstream	iss(line);
	iss >> value;
	return (value);
}

int		BitcoinExchange::check_input(std::string input)
{
	std::ifstream	ifs(input.c_str());
	std::string		line;


	if (ifs.is_open() == false)
		return (err_msg("Error: Input file does not exist.", -1));
    
    if (!getline(ifs, line) && ifs.eof() == true)
    {
    	return (err_msg("Error: the input file is empty.", -1));
    }

	while (ifs.eof() != true)
	{
		std::string		date = get_date(line, '|');
		double			value = get_value(line, '|');

		if (error_case(line, date, value) == -1)
        {
            getline(ifs, line);
			continue;
        }
		date.resize(date.length() - 1);
		for (std::map<std::string, double>::iterator it = this->map.begin(); it != this->map.end(); ++it)
		{
			if (it->first < date)
				continue ;
			else if (date == it->first)
			{
				std::cout << date << " => " << value << " = " << value * it->second << std::endl;
				break ;
			}
			else if (it->first > date)
			{
				--it;
				std::cout << date << " => " << value << " = " << value * it->second << std::endl;
				break ;
			}
		}
        getline(ifs, line);
	}
    return (0);
}

int	BitcoinExchange::error_case(std::string &line, const std::string &date, const double &value)
{
	if (line.find('|', 0) == line.npos && value == -1)
	{
		line = "Error: Bad input => " + line + ".";
		return (err_msg(line, -1));
	}
	else if (date.length() > 11)
		return (err_msg("Error: Date format not valid.", -1));
	else if (value > 1000)
		return (err_msg("Error: Too large number.", -1));
	else if (value < 0)
		return (err_msg("Error: not a positive number.", -1));
	return (0);
}

//affiche un message d'erreur et peut etre utiliser pour effectuer un return dans certaine fonction
int	err_msg(std::string err_name, int rtn)
{
	std::cerr << err_name << std::endl;
	return (rtn);
}
