#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	michel("Michel", 1333);
		
		std::cout << michel << std::endl;
	}
	catch(std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	try
	{
		Form	a("A", 21, 21);
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Bobby("Bobby", 150);

		std::cout << a << std::endl;
		Bob.signForm(a);
		Bob.signForm(a);
		Bobby.signForm(a);
	}
	catch(const std::exception &a)
	{
		std::cerr << a.what() << std::endl;
	}
	return (0);
}