#pragma once
# include <iostream>
# include <stack>
# include <deque>
# include <sstream>
# include <stdexcept>
# include <stdlib.h>

bool	check_char(char c);
bool	check_args(std::string args);
int		err_msg(std::string err_name, int rtn);
bool	rpncalcul(std::string args);
bool	ft_isdigit(char i);