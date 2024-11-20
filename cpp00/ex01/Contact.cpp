#include "Contact.hpp"

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{

}

void	Contact::set_firstname(std::string buf)
{
	this->_firstname = buf;
	return ;
}

void	Contact::set_lastname(std::string buf)
{
	this->_lastname = buf;
	return ;
}

void	Contact::set_nickname(std::string buf)
{
	this->_nickname = buf;
	return ;
}

void	Contact::set_phone_number(std::string buf)
{
	this->_phone_number = buf;
	return ;
}

void	Contact::set_darkest_secret(std::string buf)
{
	this->_darkest_secret = buf;
	return ;
}

std::string	Contact::get_firstname(void)
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

