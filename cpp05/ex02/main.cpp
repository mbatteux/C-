#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		ShrubberyCreationForm	scf("115");
		Bureaucrat	b("Bob", 137);
		Bureaucrat  c("Cob", 150);

		c.signForm(scf);
		c.executeForm(scf);
		b.signForm(scf);
		b.executeForm(scf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm	rrf("Tristan");
		Bureaucrat	b("Bob", 45);
		Bureaucrat	c("Cob", 150);

		b.signForm(rrf);
		b.executeForm(rrf);
		c.executeForm(rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm	ppf("Tristan");
		Bureaucrat	b("Bob", 5);
		Bureaucrat	c("Cob", 150);

		b.signForm(ppf);
		b.executeForm(ppf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}