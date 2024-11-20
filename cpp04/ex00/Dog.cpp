#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout << this->type << " derived constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " derived destructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	this->type = rhs.type;
	return(*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof !" << std::endl;
}