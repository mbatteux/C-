#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:

protected:
	std::string _name;
	unsigned int	_hp; //hit point
	unsigned int	_ep; //energy point
	unsigned int	_ad; // attack damage
public:
	ClapTrap(void);
	ClapTrap(std::string new_name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &src);
	ClapTrap	&operator=(const ClapTrap &rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	getname(void) const;
	unsigned int get_hp(void) const;
	unsigned int get_ep(void) const;
	unsigned int get_ad(void) const;
};

#endif