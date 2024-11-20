#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	
}

Ice::~Ice(void)
{

}

Ice::Ice(const Ice &src)
{
	*this = src;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	this->type = rhs.type;
	return(*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shot an ice bolt at " << target.getName() << " *" << std::endl;
}
