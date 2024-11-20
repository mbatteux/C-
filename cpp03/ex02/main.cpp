#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	*Claptrap = new ClapTrap("CL4P-TP");
	ScavTrap	*Scavtrap = new ScavTrap("SC4V-TP");
	FragTrap	*Fragtrap = new FragTrap("FR4G-TP");

	Claptrap->attack("bob");
	Claptrap->takeDamage(1);
	Claptrap->beRepaired(2);
	Scavtrap->attack("Skag");
	Scavtrap->takeDamage(8);
	Scavtrap->beRepaired(7);
	Scavtrap->guardGate();
	Fragtrap->attack("flint");
	Fragtrap->takeDamage(-2);
	Fragtrap->beRepaired(2);
	Fragtrap->highFivesGuys();
	delete Claptrap;
	delete Scavtrap;
	delete Fragtrap;
	return (0);
}