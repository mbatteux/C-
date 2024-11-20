#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_signed = false;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	this->_signed = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->_signed = rhs.get_signed();
	return (*this);
}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == true)
	{
		if (executor.get_grade() <= this->get_fegrade())
		{
			std::string	path = this->_target + "_shrubbery";
			std::ofstream ofs(path.c_str(), std::ofstream::trunc);

			ofs << "                ,@@@@@@@," << std::endl;
			ofs << "       ,,,.   ,@@@@@@/@@@@  .oo8888o." << std::endl;
			ofs << "     %/%&%&&%,@@@@@@/@@@@@@,8888888/8o" << std::endl;
			ofs << "   ,%&%&&%&&%,@@@@@@@@/@@@888888888/88'" << std::endl;
			ofs << "   %&&%&%&/%&&%@@@@@/ /@@@888888888888'" << std::endl;
			ofs << "   %&&%/ %&%/%&&@@V V /@@' `88888`/88'" << std::endl;
			ofs << "   `&%&V `/%&'    |.|        8|88|/8'" << std::endl;
			ofs << "       |o|        | |         |  |" << std::endl;
			ofs << "       |.|        | |         |  |" << std::endl;
			ofs << "   ___/ .|//_/__/_| |_//_____/|  |_//__/_" << std::endl;
			ofs.close();
			return (true);
		}
		else 
			throw Bureaucrat::GradeTooLow();
	}
	else
		throw Bureaucrat::NotSigned();
}