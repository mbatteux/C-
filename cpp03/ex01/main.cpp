#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	*Claptrap = new ClapTrap("CL4P-TP");
	ScavTrap	*Scavtrap = new ScavTrap("SC4P-TP");

	Scavtrap->attack("ClapTrap");
	Scavtrap->takeDamage(8);
	Scavtrap->beRepaired(8);
	Scavtrap->guardGate();
	Claptrap->attack("bobby");
	Claptrap->takeDamage(1);
	Claptrap->beRepaired(2);
	delete Claptrap;
	delete Scavtrap;
	return (0);
}