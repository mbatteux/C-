#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*Joel = new Zombie(name);

	return (Joel);
}