#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &weapon) : _weapon(weapon), _name(new_name)
{

}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}