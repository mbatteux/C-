#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "SC4V-TP derived constructor called" << std::endl;
	this->_name = "SC4V-TP";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP derived destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	std::cout << "SC4V-TP derived name constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "SC4V-TP derived copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << this->_name << "SC4V-TP derived copy assignment operator called" << std::endl;
	this->_name = rhs.getname();
	this->_ad = rhs.get_ad();
	this->_hp = rhs.get_hp();
	this->_ep = rhs.get_ep();
	return (*this);
}


void	ScavTrap::attack(const std::string& target)
{
	if (this->_ep == 0)
	{
		std::cout << "No more Energy Point left," << this->_name  << " can't attack !" << std::endl;
		return ;
	}
	else if (this->_hp == 0)
	{
		std::cout << this->_name  << " is dead he can't attack !" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << ", causing " << this->_ad  << " points of damage !" << std::endl;
	this->_ep -= 1;
	std::cout << this->_name << " has " << this->_ep << " Energy Point left" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is in gatekeeper mode" << std::endl;
}
