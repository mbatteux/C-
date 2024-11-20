#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"



class PhoneBook
{
private:
	Contact	Contact[8];
	int		_nb_contact;
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	set_contact(std::string buf);
	int		get_nb_contact(void);
	void	show_contact(void);
};


#endif