#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	private:

	protected:

	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &src);
		Dog	&operator=(const Dog &rhs);

		void	makeSound(void) const;
};

#endif