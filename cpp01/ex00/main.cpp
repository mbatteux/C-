#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Zomb;


	Zomb = newZombie("Joel");
	randomChump("Luck");
	delete Zomb;
	return (0);
}