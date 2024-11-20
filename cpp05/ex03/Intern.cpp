#include "Intern.hpp"

Intern::Intern(void)
{

}

Intern::~Intern(void)
{

}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::President(const std::string &target)
{
	AForm	*a = new PresidentialPardonForm(target);

	return (a);
}

AForm *Intern::Robotomy(const std::string &target)
{
	AForm	*b = new RobotomyRequestForm(target);

	return (b);
}

AForm *Intern::Shrubbery(const std::string &target)
{
	AForm	*c = new ShrubberyCreationForm(target);

	return (c);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string	name[] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	AForm *(Intern::*functions[])(const std::string &target) = {&Intern::Robotomy, &Intern::President, &Intern::Shrubbery};

	for(int i = 0; i < 3; i++)
	{
		if (!name[i].compare(formName))
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*functions[i])(target);
		}
	}
	std::cout << "The formName doesn't exist" << std::endl;
	return (NULL);
}