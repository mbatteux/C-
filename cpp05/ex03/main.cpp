#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	Bureaucrat	b("Bob", 1);
	AForm *scf;

	scf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	b.signForm(*scf);
	b.executeForm(*scf);
	std::cout << std::endl;

	Intern intern2;
	Bureaucrat	w("Will", 150);
	AForm *rrf;

	rrf = intern2.makeForm("RobotomyRequestForm", "Doug");
	w.signForm(*rrf);
	w.executeForm(*rrf);
	std::cout << std::endl;

	Intern intern3;
	Bureaucrat	j("James", 2);
	AForm *ppf;

	ppf = intern3.makeForm("PresidentialPardonForm", "Mia");
	j.signForm(*ppf);
	j.executeForm(*ppf);

	return (0);
}