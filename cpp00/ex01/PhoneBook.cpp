#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nb_contact(0)
{

}

PhoneBook::~PhoneBook(void)
{

}


int	PhoneBook::get_nb_contact(void)
{
	return (this->_nb_contact);
}

std::string trunc(std::string line)
{
	int i = line.length();

	if (i > 10)
		line = line.substr(0, 9) + ".";
	else if (i <= 10)
	{
		std::string	tmp;	
		for (int j = 0; j < 10 - i; j++)
		{
			tmp += " ";
		}
		line = tmp + line;
	}
	line += "|";
	return (line);
}

std::string	show_line(Contact Contact)
{
	std::string	buf;

	buf += trunc(Contact.get_firstname());
	buf += trunc(Contact.get_lastname());
	buf += trunc(Contact.get_nickname());
	return (buf);
}

void	show_info_contact(Contact contact)
{
	std::cout << contact.get_firstname() << std::endl;
	std::cout << contact.get_lastname() << std::endl;
	std::cout << contact.get_nickname() << std::endl;
	std::cout << contact.get_phone_number() << std::endl;
	std::cout << contact.get_darkest_secret() << std::endl;
}


void	PhoneBook::show_contact(void)
{
	std::string tmp;
	int	j;

	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 1; i <= (_nb_contact <= 8 ? _nb_contact : 8); i++)
	{
		std::cout << "         " << i << "|";
		std::cout << show_line(Contact[i - 1]) << std::endl;
	}
	std::cout << "Index : ";
	std::getline(std::cin, tmp);
	std::istringstream(tmp) >> j;
	if (j > 8)
	{
		std::cout << "Contact number can't be above 8" << std::endl;
		return ;
	}
	for (int i = 1; i <= (_nb_contact <= 8 ? _nb_contact : 8); i++)
	{
		if (j == i)
		{
			show_info_contact(Contact[i - 1]);
			return ;
		}
	}
	std::cout << "Unknown Contact" << std::endl;
}

void	firstname(Contact *inst, std::string buf, std::string empty, std::string name)
{
	std::cout << name;
	std::getline(std::cin, buf);
	while (buf.empty())
	{
		std::cout << empty + "can't be empty" << std::endl;
		std::cout << name;
		std::getline(std::cin, buf);
	}
	inst->set_firstname(buf);
}

void	lastname(Contact *inst, std::string buf, std::string empty, std::string name)
{
	std::cout << "Lastname : ";
	std::getline(std::cin, buf);
	while (buf.empty())
	{
		std::cout << empty + "can't be empty" << std::endl;
		std::cout << name;
		std::getline(std::cin, buf);
	}
	inst->set_lastname(buf);
}

void	nickname(Contact *inst, std::string buf, std::string empty, std::string name)
{
	std::cout << "Nickname : ";
	std::getline(std::cin, buf);
	while (buf.empty())
	{
		std::cout << empty + "can't be empty" << std::endl;
		std::cout << name;
		std::getline(std::cin, buf);
	}
	inst->set_nickname(buf);
}

void	phone_number(Contact *inst, std::string buf, std::string empty, std::string name)
{
	std::cout << "Phone Number : ";
	std::getline(std::cin, buf);
	while (buf.empty())
	{
		std::cout << empty + "can't be empty" << std::endl;
		std::cout << name;
		std::getline(std::cin, buf);
	}
	inst->set_phone_number(buf);
}

void	darkest_secret(Contact *inst, std::string buf, std::string empty, std::string name)
{
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, buf);
	while (buf.empty())
	{
		std::cout << empty  + "can't be empty" << std::endl;
		std::cout << name;
		std::getline(std::cin, buf);
	}
	inst->set_darkest_secret(buf);
}

void	PhoneBook::set_contact(std::string buf)
{
	firstname(&this->Contact[this->_nb_contact % 8], buf, "Firstname ", "Firstname : ");
	lastname(&this->Contact[this->_nb_contact % 8], buf, "Lastname ", "Lastname : ");
	nickname(&this->Contact[this->_nb_contact % 8], buf, "Nickname ", "Nickname : ");
	phone_number(&this->Contact[this->_nb_contact % 8], buf, "Phone Number ", "Phone Number : ");
	darkest_secret(&this->Contact[this->_nb_contact % 8], buf, "Darkest Secret ", "Darkest Secret : ");
	this->_nb_contact++;
}
