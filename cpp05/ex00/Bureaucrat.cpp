#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::~Bureaucrat(void)
{

}

const char *Bureaucrat::GradeTooLow::what(void) const throw()
{
	return ("Bureaucrat grade is too low");
}

const char *Bureaucrat::GradeTooHigh::what(void) const throw()
{
	return ("Bureaucrat grade is too high");
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
	this->_grade = rhs.getGrade();
	return (*this);
}

const std::string Bureaucrat::getname(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
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

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getname() + ", bureaucrat grade ";
	o << rhs.getGrade();
	return (o);
}