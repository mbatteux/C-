#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac >= 2) {
        std::vector<int>    base_vector;
        std::list<int>    base_list;

        for (int i = 1; av[i]; i++) {
            for (int j = 0; av[i][j]; ++j) {
                if (!std::isdigit(av[i][j])) {
                    std::cout << "Error: Only digit allowed in parameters" << std::endl;
                    return (-1);
                }
            }
            if (std::atoi(av[i]) <= 0) {
                std::cout << "Error: Negative numbers isn't allowed" << std::endl;
                return (-1);
            }
            if (std::find(base_vector.begin(), base_vector.end(), std::atoi(av[i])) != base_vector.end()) {
                std::cout << "Error: Duplicate detected." << std::endl;
                return (-1);
            }
            base_vector.push_back(std::atoi(av[i]));
            base_list.push_back(std::atoi(av[i]));
	    }

        std::cout << "Before: ";
        for (std::vector<int>::iterator it = base_vector.begin(); it != base_vector.end(); ++it)
            std::cout << *it << ' ';
        std::cout << std::endl;

        johnson_sort_vector(base_vector);
        johnson_sort_list(base_list);
        return (1);
    }
    std::cout << "Error: Not enough args" << std::endl;
    return (0);
}