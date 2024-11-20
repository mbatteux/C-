#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::Base(void)
{
}

Base::~Base(void)
{
}

Base *Base::generate(void)
{
	std::srand(time(NULL));
	int i = std::rand() % 3;

	if (i == 0)
	{
		Base *a = new A();

		return (a);
	}
	else if (i == 1)
	{
		Base *b = new B();

		return (b);
	}
	else
	{
		Base *c = new C();

		return (c);
	}
	return (NULL);
}

void Base::identify(Base *p)
{
	A* first = dynamic_cast<A*>(p); 
	if (first)
		std::cout << "The real type is A (*)" << std::endl;
	B* second = dynamic_cast<B*>(p);
	if (second)
		std::cout << "The real type is B (*)" << std::endl;
	C* third = dynamic_cast<C*>(p);
	if (third)
		std::cout << "The real type is C (*)" << std::endl;
}

void Base::identify(Base &p)
{
	try
	{
		A	&first = dynamic_cast<A&>(p);
		(void)first;
		std::cout << "The real type is A (&)" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		B	&second = dynamic_cast<B&>(p); 
		(void)second;
		std::cout << "The real type is B (&)" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		C	&third = dynamic_cast<C&>(p); 
		(void)third;
		std::cout << "The real type is C (&)" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
}
