#ifndef HUMANA_H
# define HUMANA_H
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon	&_weapon;
	std::string _name;
public:
	HumanA(std::string new_name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
};

#endif