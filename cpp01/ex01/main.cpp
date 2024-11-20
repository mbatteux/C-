#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Zomb;


	Zomb = zombieHorde(50, "Philibert");
	delete[] Zomb;
	return (0);
}