#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << this->type << " derived constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " derived destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->type = rhs.type;
	return(*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}