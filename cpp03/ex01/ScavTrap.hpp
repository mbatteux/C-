#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string new_name);
	ScavTrap(const ScavTrap &src);
	ScavTrap	&operator=(const ScavTrap &rhs);
	void	attack(const std::string& target);
	void	guardGate(void);
};

#endif