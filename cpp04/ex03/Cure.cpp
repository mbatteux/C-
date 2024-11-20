#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

Cure::~Cure(void)
{
	
}

Cure::Cure(const Cure &src)
{
	*this = src;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	this->type = rhs.type;
	return(*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}