#include "Span.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		for (int i = 0; av[1][i]; ++i)
		{
			if (!std::isdigit(av[1][i]))
			{
				std::cout << "Error: Only digit allowed in parameters" << std::endl;
				return (-1);
			}
		}
		if (std::atoi(av[1]) < 1)
		{
			std::cout << "Error: 0 or negative numbers is not allowed" << std::endl;
			return (-1);
		}
		try
		{
			Span span(std::atoi(av[1]));
			span.addMore(std::atoi(av[1]));
			span.viewVec();
			std::cout << "Shortest Span : " << span.shortestSpan() << std::endl;
			std::cout << "Longest Span : " << span.longestSpan() << std::endl;
			std::cout << "Span lenght : " << span.getVec().size() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			return (-1);
		}
		return (0);
	}
	std::cout << "Error: Missing or too much args" << std::endl;
	return (-1);
}