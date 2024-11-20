#pragma once
# include "stdint.h"
# include "data.hpp"
# include <iostream>

class Serializer
{
private:
	Serializer(void);
	Serializer(const Serializer &src);
public:
	~Serializer(void);
	Serializer &operator=(const Serializer &rhs);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
