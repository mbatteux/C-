#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string new_name);
	FragTrap(const FragTrap &src);
	FragTrap	&operator=(const FragTrap &rhs);

	void	attack(const std::string& target);
	void	highFivesGuys(void);
};

#endif