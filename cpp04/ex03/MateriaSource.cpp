#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i <= 3; i++)
	{
		this->inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i <= 3; i++)
	{
		delete this->inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for(int i = 0; i <= 3; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = materia;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i <= 3; i++)
	{
		if (this->inventory[i]->getType() == type)
			break ;
	}
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	return(0);
}