#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif