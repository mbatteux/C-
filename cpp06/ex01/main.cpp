#include "Serializer.hpp"

int	main(void)
{
	Data	*data = NULL;
	uintptr_t oui;

	std::cout << "Data Adress :" << &data << std::endl;
	oui = Serializer::serialize(data);
	std::cout << "oui :" << oui << std::endl;
	data = Serializer::deserialize(oui);
	std::cout << "Data Adress :" << &data << std::endl;
}