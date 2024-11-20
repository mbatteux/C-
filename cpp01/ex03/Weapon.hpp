#ifndef WEAPON_H
# define WEAPON_H
# include <string>
# include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	void	setType(std::string type);
	const std::string	getType(void);
};

#endif