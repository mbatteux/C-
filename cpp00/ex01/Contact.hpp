#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <sstream>

class Contact
{
private:
	std::string		_firstname;
	std::string		_lastname;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;

public:
	Contact(void);
	~Contact(void);
	void		set_firstname(std::string buf);
	void		set_lastname(std::string buf);
	void		set_nickname(std::string buf);
	void		set_phone_number(std::string buf);
	void		set_darkest_secret(std::string buf);
	std::string get_firstname(void);
	std::string get_lastname(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);
};
#endif