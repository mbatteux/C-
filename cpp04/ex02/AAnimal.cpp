#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->type = rhs.type;
	return(*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

