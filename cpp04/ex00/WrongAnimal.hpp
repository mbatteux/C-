#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string new_name);
		virtual ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		std::string	getType(void) const;

		void	makeSound(void) const;
};

#endif