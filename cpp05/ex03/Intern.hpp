#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	AForm *President(const std::string &target);
	AForm *Robotomy(const std::string &target);
	AForm *Shrubbery(const std::string &target);
public:
	Intern(void);
	~Intern(void);
	Intern(const Intern &src);
	Intern &operator=(const Intern &rhs);
	AForm *makeForm(std::string formName, std::string target);
};

#endif