#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure(void);
	~Cure(void);
	Cure(const Cure &src);
	Cure	&operator=(const Cure &rhs);
	AMateria* clone() const;
	virtual void	use(ICharacter& target);
};

#endif
