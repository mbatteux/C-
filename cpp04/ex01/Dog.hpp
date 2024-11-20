#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog(void);
	~Dog(void);
	Dog(const Dog &src);
	Dog	&operator=(const Dog &rhs);

	Brain	*getBrain(void) const;
	void	makeSound(void) const;
};

#endif