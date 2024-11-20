#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	protected:
		const std::string _fname;
		bool		_signed;
		const int	_fsgrade;
		const int	_fegrade;
	public:
		AForm(void);
		~AForm(void);
		AForm(std::string fname, const int fsgrade, const int fegrade);
		AForm(const AForm &src);
		AForm 	&operator=(const AForm &rhs);
		const 	std::string get_fname(void) const;
		bool 	get_signed(void) const;
		int 	get_fsgrade(void) const;
		int 	get_fegrade(void) const;
		bool	beSigned(Bureaucrat &b);
		virtual bool execute(Bureaucrat const & executor) const = 0;
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

std::ostream	&operator<<(std::ostream &o, const AForm &rhs);

#endif