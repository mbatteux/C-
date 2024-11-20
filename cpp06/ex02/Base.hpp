#pragma once
# include <ctime>
# include <cstdlib>
# include <iostream>

class Base
{
private:
	
public:
	Base(void);
	virtual ~Base(void);
	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);
};
