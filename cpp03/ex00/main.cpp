#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	*Claptrap = new ClapTrap("CL4P-TP");

	Claptrap->attack("Michel");
	Claptrap->takeDamage(8);
	Claptrap->beRepaired(7);
	Claptrap->takeDamage(23202);
	delete Claptrap;
	return (0);
}