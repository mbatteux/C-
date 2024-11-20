#pragma once
# include <iostream>

inline int	func1(int a)
{
	return (a + 1);
}


inline char	func2(char a)
{
	return (a - 1);
}

template <typename T, typename U, typename V>
void	iter(T &array, U size, V func)
{
	for (U i = 0; i < size; ++i)
	{
		array[i] = func(array[i]);
		std::cout << array[i];
	}
}