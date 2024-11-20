#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FR4G-TP derived constructor called" << std::endl;
	this->_name = "FR4G-TP";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP derived Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	std::cout << "FR4G-TP derived Name constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FR4G-TP derived copy constructor called" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FR4G-TP derived copy assignment operator called" << std::endl;
	this->_name = rhs.getname();
	this->_ad = rhs.get_ad();
	this->_hp = rhs.get_hp();
	this->_ep = rhs.get_ep();
	return (*this);
}

void	FragTrap::attack(const std::string& target)
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

void	FragTrap::highFivesGuys(void)
{
	if (this->_hp > 0)
		std::cout << this->_name << ": High Fives guys ??? :D" << std::endl;
}