#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria	*inventory[3];
public:
	Character(std::string new_name);
	~Character();
	Character(const Character &src);
	Character	&operator=(const Character &rhs);
	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif