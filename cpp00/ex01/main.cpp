#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string		buf;
	PhoneBook		repertory;

	while (true)
	{
		std::getline(std::cin, buf);
		if (buf.compare("ADD") == 0)
		{
			repertory.set_contact(buf);
		}
		else if(buf.compare("SEARCH") == 0)
		{
			repertory.show_contact();
		}
		else if (buf.compare("EXIT") == 0)
			return (1);
		else
			std::cout << "Unknown Command" << std::endl;
	}
	return (0);
}