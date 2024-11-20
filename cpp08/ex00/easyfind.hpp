#pragma once
# include <iostream>
# include <algorithm>
# include <exception>
# include <list>
# include <deque>
# include <vector>
# include <map>

template <typename T>
typename T::iterator easyfind(T cont, int i)
{
	typename T::iterator	it = std::find(cont.begin(), cont.end(), i);

	if (it != cont.end())
	{
		std::cout << "Integer " << *(it) << " found in container" << std::endl;
		return (it);
	}
	throw std::out_of_range("Integer not found in container");
}
