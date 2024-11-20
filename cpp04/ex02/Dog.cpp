#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->type = "Dog";
	std::cout << this->type << " derived constructor called" << std::endl;
	this->brain = new Brain;
	this->brain->getIdeas()[0] = "Woof";
	this->brain->getIdeas()[1] = "noWoof";
	this->brain->getIdeas()[2] = "yesWoof";
	this->brain->getIdeas()[3] = "maybeWoof ?";
	this->brain->getIdeas()[4] = "WOOOOF";
}

Dog::~Dog()
{
	for (int i = 0; i < 100; i++)
	{
		this->brain->getIdeas()[i] = "dead";
	}
	delete this->brain;
	std::cout << this->type << " derived destructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << this->type << " derived copy constructor called" << std::endl;
	*this = src;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	Brain	*new_brain = new Brain(*rhs.getBrain());
	delete this->brain;
	this->type = rhs.type;
	this->brain = new_brain;
	return(*this);
}

Brain	*Dog::getBrain(void) const
{
	return(this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof !" << std::endl;
}