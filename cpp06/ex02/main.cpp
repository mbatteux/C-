#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

int	main(void)
{
	Base	*a = NULL;

	a = a->generate();
	a->identify(*a);
	a->identify(a);
}