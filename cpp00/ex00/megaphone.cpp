#include <iostream>
#include <cstring>

int	main(int ac, char **av){
	(void)av;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (-1);
	}
	for(int i = 1; i < ac; i++)
	{
		for(size_t j = 0; j < strlen(av[i]); j++)
		{
			std::cout << (char)toupper(av[i][j]);
		}
		
	}
	std::cout << std::endl;
}