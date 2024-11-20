#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		int		get_grade(void) const;
		void	gradeUp(void);
		void	gradeDown(void);
		const	std::string get_name(void) const;
		void	signForm(AForm &f);
		void	executeForm(AForm const & form);
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
		class NotSigned : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif