#include "Character.hpp"

Character::Character(std::string new_name) : _name(new_name)
{
	for(int i= 0; i <= 3; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::~Character(void)
{
}

std::string const &Character::getName(void) const
{
	return(this->_name);
}

Character::Character(const Character &src)
{
	*this = src;
}
Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs.getName();
	return(*this);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i <= 3; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx > 3)
		return ;
	if (this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
	}
}
