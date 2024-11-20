#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	this->type = "Cat";
	std::cout << this->type << " derived constructor called" << std::endl;
	this->brain = new Brain;
	this->brain->getIdeas()[0] = "non";
	this->brain->getIdeas()[1] = "oui";
	this->brain->getIdeas()[2] = "jsp";
	this->brain->getIdeas()[3] = "pk";
	this->brain->getIdeas()[4] = "AAAH";
}

Cat::~Cat()
{
	for (int i = 0; i < 100; i++)
	{
		this->brain->getIdeas()[i] = "dead";
	}
	delete this->brain;
	std::cout << this->type << " derived destructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << this->type << " derived copy constructor called" << std::endl;
	*this = src;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	Brain	*new_brain = new Brain(*rhs.getBrain());
	delete this->brain;
	this->type = rhs.type;
	this->brain = new_brain;
	return(*this);
}

Brain	*Cat::getBrain(void) const
{
	return(this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}