#include "RPN.hpp"

//check si les characteres de l'argument du programme sont correcte
bool	check_char(char c)
{
	std::string	set = "0123456789+-/*";
	bool	state = false;

	for(size_t i = 0; i < set.length(); i++)
	{
		if (c == set[i])
			state = true;
	}
	return (state);
}

//check l'args pour s'assurer qu'il est bien ecrit
bool	check_args(std::string args)
{
	for(size_t i = 0; i < args.length(); i++)
	{
		if (args[0] == ' ' || args[args.length() - 1] == ' ')
			return (false);
		else if (check_char(args[i]) == false)
		{
			if (args[i] == ' ' && check_char(args[i + 1]) && check_char(args[i - 1]))
				continue ;
			return (false);
		}
		else if (check_char(args[i]) == true)
		{
			if (check_char(args[i + 1]) == true)
				return (false);
		}
	}
	return (true);
}

bool	ft_isdigit(char	i)
{
	if (i >= '0' && i <= '9')
		return (true);
	return (false);
}

bool	rpncalcul(std::string args)
{
	std::istringstream	token(args);
	std::string			str;
	std::stack<int> 	pile;

	while (token >> str)
	{
		if (ft_isdigit(str[0]) == true)
			pile.push(atoi(str.c_str()));
		else
		{
			if (pile.size() < 2)
				return (err_msg("Error: not enough operand", -1));
			int	val1 = pile.top(); pile.pop();
			int	val2 = pile.top(); pile.pop();
			int res;

			if (str.compare("+") == 0)
				res = val2 + val1;
			else if (str.compare("-") == 0)
				res = val2 - val1;
			else if (str.compare("*") == 0)
				res = val2 * val1;
			else if (str.compare("/") == 0)
			{
				if (!val1)
					return (err_msg("Error: div 0 is not accepted", -1));
				res = val2 / val1;
			}
			else
				return (err_msg("Error: Operator unknown", -1));
			pile.push(res);
		}
	}
	if (pile.size() != 1) {
       return (err_msg("Erreur: Missing Operator", -1));
    }
	std::cout << pile.top() << std::endl;
	return (true);
}

//affiche un message d'erreur et peut etre utiliser pour effectuer un return dans certaine fonction
int	err_msg(std::string err_name, int rtn)
{
	std::cerr << err_name << std::endl;
	return (rtn);
}