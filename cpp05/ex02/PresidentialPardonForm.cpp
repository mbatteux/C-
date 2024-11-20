#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_signed = false;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	this->_signed = false;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_signed = rhs.get_signed();
	return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == true)
	{
		if (executor.get_grade() <= this->get_fegrade())
		{
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
			return (true);
		}
		else 
			throw Bureaucrat::GradeTooLow();
	}
	else
		throw Bureaucrat::NotSigned();
}