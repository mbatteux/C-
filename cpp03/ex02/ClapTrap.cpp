#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("CL4P-TP"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "CL4P-TP constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : _name(new_name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "CL4P-TP name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "CL4P-TP copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "CL4P-TP copy assignment operator called" << std::endl;
	this->_name = rhs.getname();
	this->_ad = rhs.get_ad();
	this->_hp = rhs.get_hp();
	this->_ep = rhs.get_ep();
	return (*this);
}

std::string	ClapTrap::getname(void) const
{
	return(this->_name);
}

unsigned int	ClapTrap::get_ad(void) const
{
	return(this->_ad);
}

unsigned int	ClapTrap::get_hp(void) const
{
	return(this->_hp);
}

unsigned int	ClapTrap::get_ep(void) const
{
	return(this->_ep);
}

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "STOP ! " << this->_name << " is already dead leave him alone !" << std::endl;
		return ;
	}
	if (amount > this->_hp ? this->_hp = 0 : this->_hp -= amount)
		;
	std::cout << "OUTCH ! " << this->_name << " take " << amount << " damage !" << std::endl;
	std::cout << this->_name << " has " << this->_hp << " Hit Point left" << std::endl;
	if (this->_hp == 0)
		std::cout << "Lord " << this->_name << " is dead ! :(" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep == 0)
	{
		std::cout << "No more Energy Point left " << this->_name  << " can't repair himself !" << std::endl;
		return ;
	}
	else if (this->_hp == 0)
	{
		std::cout << this->_name  << " is dead he can't repair himself !" << std::endl;
		return ;
	}
	if (this->_hp == 10)
	{
		std::cout << this->_name << " tried to repair himself but he is already at max Hit Point" << std::endl;
		return ;
	}
	if (amount > 10 - this->_hp)
		amount = 10 - this->_hp;
	this->_hp += amount;
	std::cout << this->_name << " repair itself, he gains " << amount << " Hit Point" << std::endl;
	std::cout << this->_name << " has " << this->_hp << " Hit Point left" << std::endl;
	this->_ep -= 1;
	std::cout << this->_name << " has " << this->_ep << " Energy Point left" << std::endl;
}
