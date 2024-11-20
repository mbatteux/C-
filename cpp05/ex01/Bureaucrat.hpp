#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;
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
		int get_grade(void) const;
		const std::string get_name(void) const;
		void	signForm(Form &f);
		void	gradeUp(void);
		void	gradeDown(void);
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

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif