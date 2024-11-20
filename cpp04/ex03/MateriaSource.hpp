#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	AMateria	*inventory[3];
public:
	MateriaSource();
	virtual ~MateriaSource();
	void learnMateria(AMateria *);
	AMateria	*createMateria(std::string const & type);
};

#endif