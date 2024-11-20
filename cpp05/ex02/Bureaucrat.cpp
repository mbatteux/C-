#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::~Bureaucrat(void)
{

}

const char *Bureaucrat::GradeTooLow::what(void) const throw()
{
	return ("Bureaucrat grade is too low.");
}

const char *Bureaucrat::GradeTooHigh::what(void) const throw()
{
	return ("Bureaucrat grade is too high.");
}
const char *Bureaucrat::NotSigned::what(void) const throw()
{
	return ("Form isn't signed.");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw GradeTooHigh();
	if (this->_grade > 150)
		throw GradeTooLow();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.get_grade();
	return (*this);
}

const std::string Bureaucrat::get_name(void) const
{
	return (this->_name);
}

int Bureaucrat::get_grade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::gradeUp(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHigh();
	this->_grade -= 1;
	std::cout << "Congrats ! " << this->_name << " just promoted to grade to " << this->_grade << std::endl;
}

void	Bureaucrat::gradeDown(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLow();
	this->_grade += 1;
	std::cout << "unfortunatly " << this->_name << " downgraded to " << this->_grade << std::endl;
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		if (f.beSigned(*this) == true)
			std::cout << this->get_name() << " signed " << f.get_fname() << " Form." << std::endl;
		else
			std::cout << this->get_name() << " couldn't sign " << f.get_fname() << " Form because this Form is already signed." << std::endl; 
	}
	catch(const std::exception &a)
	{
		std::cout << this->get_name() << " couldn't sign " << f.get_fname() << " Form because " << a.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		if (form.execute(*this) == true)
			std::cout << this->_name << " execute " << form.get_fname() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr<< this->_name << " can't execute " << form.get_fname() << " because " << e.what() << '\n';
	}
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.get_name() + ", bureaucrat grade ";
	o << rhs.get_grade();
	return (o);
}