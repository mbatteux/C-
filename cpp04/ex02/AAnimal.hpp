#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{

private:

protected:
	std::string	type;
public:
	AAnimal(void);
	virtual ~AAnimal(void); //virtual destructor car au moins une fonction presente est virtuel
	AAnimal(const AAnimal &src);
	AAnimal	&operator=(const AAnimal &rhs);
	std::string	getType(void) const;

	virtual void	makeSound(void) const = 0;
};

#endif