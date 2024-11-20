#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << this->type << " copy constructor called" << std::endl;
	*this = src;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->type = rhs.type;
	return(*this);
}

std::string const &AMateria::getType(void) const
{
	return(this->type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}