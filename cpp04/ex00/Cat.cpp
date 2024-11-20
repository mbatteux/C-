#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout << this->type << " derived constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " derived destructor called" << std::endl;
}
Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->type = rhs.type;
	return(*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}