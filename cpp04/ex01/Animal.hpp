#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{

private:

protected:
	std::string	type;
public:
	Animal(void);
	Animal(std::string new_name);
	virtual ~Animal(void); //virtual destructor car au moins une fonction presente est virtuel
	Animal(const Animal &src);
	Animal	&operator=(const Animal &rhs);
	std::string	getType(void) const;

	virtual void	makeSound(void) const;
};

#endif