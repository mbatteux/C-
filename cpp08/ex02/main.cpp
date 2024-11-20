#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::list<int>	list;

	mstack.push(1);
	mstack.push(2);
    mstack.push(3);
	mstack.push(4);
	list.push_back(1);
	list.push_back(2);
    list.push_back(3);
	list.push_back(4);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator it_list = list.begin();
	std::list<int>::iterator ite_list = list.end();

    while (it != ite)
	{
		std::cout << "mstack : " << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	while (it_list != ite_list)
	{
		std::cout << "list   : " << *it_list << std::endl;
		++it_list;
	}
	return 0;
}

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;

// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	return 0;
// }