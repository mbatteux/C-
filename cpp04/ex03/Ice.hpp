#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice(void);
	~Ice(void);
	Ice(const Ice &src);
	Ice	&operator=(const Ice &rhs);
	AMateria* clone() const;
	virtual void	use(ICharacter& target);
};

#endif
