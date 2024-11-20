#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string _fname;
		bool		_signed;
		const int	_fsgrade;
		const int	_fegrade;
	public:
		Form(void);
		~Form(void);
		Form(std::string fname, const int fsgrade, const int fegrade);
		Form(const Form &src);
		Form 	&operator=(const Form &rhs);
		const 	std::string get_fname(void) const;
		bool 	get_signed(void) const;
		int 	get_fsgrade(void) const;
		int 	get_fegrade(void) const;
		bool	beSigned(Bureaucrat &b);
		class GradeTooLow : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		class GradeTooHigh : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, const Form &rhs);

#endif