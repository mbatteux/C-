# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_signed = false;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	this->_signed = false;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_signed = rhs.get_signed();
	return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == true)
	{
		if (executor.get_grade() <= this->get_fegrade())
		{
			std::cout << "*Drilling noises* This one will survived i can feel it, it has TO WORK !" << std::endl;
			std::srand(time(NULL));
			if (std::rand() % 2 == 0)
				std::cout << "YES ! The robotomy is complete ! " << this->_target << " you're a ROBOT ! Human's law can't limit yourself now !" << std::endl;
			else
				std::cout << "*Cries* " << this->_target << " didn't make it... poor little soul *sob*. Anyway i'll find a new one it's okay." << std::endl;
			return (true);
		}
		else 
			throw Bureaucrat::GradeTooLow();
	}
	else
		throw Bureaucrat::NotSigned();
}