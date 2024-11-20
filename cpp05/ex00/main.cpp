#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	michel("Michel", 2);
		
		std::cout << michel << std::endl;
		michel.gradeUp();
		std::cout << michel << std::endl;
	}
	catch(std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	return (0);
}