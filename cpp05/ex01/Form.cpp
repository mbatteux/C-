#include "Form.hpp"

Form::Form(void) : _fname("Default Form"), _signed(false), _fsgrade(150), _fegrade(150)
{

}

Form::~Form(void)
{

}

Form::Form(std::string fname, const int fsgrade, const int fegrade) : _fname(fname), _signed(false), _fsgrade(fsgrade), _fegrade(fegrade)
{
	if (this->_fsgrade < 1 || this->_fegrade < 1)
		throw GradeTooHigh();
	if (this->_fsgrade > 150 || this->_fegrade > 150)
		throw GradeTooLow();
}

Form::Form(const Form &src) : _fname(src.get_fname()), _signed(src.get_signed()), _fsgrade(src.get_fsgrade()), _fegrade(src.get_fegrade())
{
	*this = src;
}

Form &Form::operator=(const Form &rhs)
{
	this->_signed = rhs.get_signed();
	return (*this);
}

const std::string Form::get_fname(void) const
{
	return (this->_fname);
}

bool Form::get_signed(void) const
{
	return (this->_signed);
}

int Form::get_fsgrade(void) const
{
	return (this->_fsgrade);
}

int Form::get_fegrade(void) const
{
	return (this->_fegrade);
}

const char *Form::GradeTooLow::what(void) const throw()
{
	return ("Form grade is too low");
}

const char *Form::GradeTooHigh::what(void) const throw()
{
	return ("Form grade is too high");
}

bool	Form::beSigned(Bureaucrat &b)
{
	if (b.get_grade() <= this->_fsgrade && this->_signed == false)
	{
		this->_signed = true;
		return (true);
	}
	else if (this->_signed == true)
		return (false);
	else if (b.get_grade() > this->_fsgrade)
		throw Bureaucrat::GradeTooLow();
	return (false);
}

std::ostream	&operator<<(std::ostream &o, const Form &rhs)
{
	o << "Form " << rhs.get_fname();
	if (rhs.get_signed() == false)
		o << " isn't signed.";
	else
		o << " is signed.";
	o << " Grade required to sign it : " << rhs.get_fsgrade();
	o << " Grade required to execute it : " << rhs.get_fegrade();
	return (o);
}
