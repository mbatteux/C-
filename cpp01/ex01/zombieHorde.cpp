#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	 Zombie	*phil = new Zombie[N];

	 for(int i = 0; i < N; i++)
	 {
		phil[i].set_name(name);
		phil[i].announce();
	 }
	 return (phil);
}