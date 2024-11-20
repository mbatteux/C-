#ifndef HUMANB_H
# define HUMANB_H
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*_weapon;
	std::string _name;
public:
	HumanB(std::string new_name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &new_weapon);
};

#endif