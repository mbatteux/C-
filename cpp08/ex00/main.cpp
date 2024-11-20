#include "easyfind.hpp"

int	main(void)
{
	try
	{
		std::vector<int> vec;

		vec.push_back(2);
		vec.push_back(74);
		vec.push_back(32);
		vec.push_back(9);
		vec.push_back(18);
		vec.push_back(23);

		easyfind(vec, 32);
		easyfind(vec, 7);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::list<int> list;

		list.push_back(2);
		list.push_back(74);
		list.push_back(32);
		list.push_back(9);
		list.push_back(18);
		list.push_back(23);

		easyfind(list, 18);
		easyfind(list, 53789);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::deque<int> deque;

		deque.push_back(2);
		deque.push_back(74);
		deque.push_back(32);
		deque.push_back(9);
		deque.push_back(18);
		deque.push_back(23);

		easyfind(deque, 74);
		easyfind(deque, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}