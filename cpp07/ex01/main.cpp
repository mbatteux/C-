#include "Iter.hpp"

int main(void)
{
	char	array[] = {'a','b','c','d','e'};
	int		tab[]  = {1,2,3,4,5};

	iter<>(array, 5, func2);
	std::cout << std::endl;
	iter<>(tab, 5, func1);
	std::cout << std::endl;
}