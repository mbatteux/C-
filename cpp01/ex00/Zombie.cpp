#include "Zombie.hpp"

Zombie::Zombie(std::string nom) : name(nom)
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name + ": run out of brains... :(" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ... :)" << std::endl;
}