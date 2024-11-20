#include "PmergeMe.hpp"

// prob si lettre coller chiffre

int johnson_sort_vector(std::vector<int> base) {
    std::clock_t start = std::clock();
	std::vector<std::pair<int, int> > 	pairs;
	std::vector<int>					single;

	if (base.size() % 2 != 0)
	{
		single.push_back(base.back());
		base.pop_back();
	}
	
	for (std::vector<int>::iterator it = base.begin(); it != base.end(); it += 2) {
		pairs.push_back(std::make_pair(*it, *(it + 1)));
		if (pairs.back().first > pairs.back().second)
			std::swap(pairs.back().first, pairs.back().second);
	}

	std::vector<int>	res = merge_insert(recup_min(pairs, single), recup_max(pairs));

    std::clock_t end = std::clock();
	std::cout << "After:  ";
	for (std::vector<int>::iterator it = res.begin(); it != res.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

    double duration = (double(end - start) / CLOCKS_PER_SEC) * 1000;
    std::cout << "Time to process a range of " << res.size() << " with std::vector : " <<  duration << " ms" << std::endl;
	return (0);
}

std::vector<int> recup_min(std::vector<std::pair<int, int> > pairs, std::vector<int> single) {
	std::vector<int>	rtn_min;

	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
		rtn_min.push_back(it->first);
	if (single.empty() == false)
		rtn_min.push_back(single.back());
	std::sort(rtn_min.begin(), rtn_min.end());

	return (rtn_min);
}

std::vector<int> recup_max(std::vector<std::pair<int, int> > pairs) {
	std::vector<int>	rtn_max;

	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
		rtn_max.push_back(it->second);
	std::sort(rtn_max.begin(), rtn_max.end());

	return (rtn_max);
}

std::vector<int> merge_insert(std::vector<int> min, std::vector<int> max) {
	std::vector<int>			temp_res;
	std::vector<int>::iterator	min_it = min.begin();
	std::vector<int>::iterator	max_it = max.begin();

	while (min_it != min.end() && max_it != max.end()) {
		if (*min_it < *max_it) {
			temp_res.push_back(*min_it);
			min_it++;
		}
		else if (*min_it > *max_it) {
			temp_res.push_back(*max_it);
			max_it++;
		}
	}

	while (min_it != min.end()) {
		temp_res.push_back(*min_it);
		min_it++;
	}

	while (max_it != max.end()) {
		temp_res.push_back(*max_it);
		max_it++;
	}

	return (temp_res);
}

int johnson_sort_list(std::list<int> base) {
    std::clock_t start = std::clock();
    std::list<std::pair<int, int> > pairs;
    std::list<int> single;

    if (base.size() % 2 != 0) {
        single.push_back(base.back());
        base.pop_back();
    }

    for (std::list<int>::iterator it = base.begin(); it != base.end(); ++it) {
        int first = *it;
        ++it;
        int second = *it;
        pairs.push_back(std::make_pair(first, second));
        if (pairs.back().first > pairs.back().second)
            std::swap(pairs.back().first, pairs.back().second);
    }

    std::list<int> res = merge_insert(recup_min(pairs, single), recup_max(pairs));

    std::clock_t end = std::clock();
    std::cout << "After:  ";
    for (std::list<int>::iterator it = res.begin(); it != res.end(); ++it)
        std::cout << *it << ' ';
    std::cout << std::endl;

    double duration = (double(end - start) / CLOCKS_PER_SEC) * 1000;
    std::cout << "Time to process a range of " << res.size() << " with std::list : " << duration << " ms" << std::endl;
    return (0);
}

std::list<int> recup_min(std::list<std::pair<int, int> > pairs, std::list<int> single) {
	std::list<int>	rtn_min;

	for (std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
		rtn_min.push_back(it->first);
	if (single.empty() == false)
		rtn_min.push_back(single.back());
    rtn_min.sort();

	return (rtn_min);
}

std::list<int> recup_max(std::list<std::pair<int, int> > pairs) {
	std::list<int>	rtn_max;

	for (std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
		rtn_max.push_back(it->second);
    rtn_max.sort();

	return (rtn_max);
}

std::list<int> merge_insert(std::list<int> min, std::list<int> max) {
	std::list<int>			temp_res;
	std::list<int>::iterator	min_it = min.begin();
	std::list<int>::iterator	max_it = max.begin();

	while (min_it != min.end() && max_it != max.end()) {
		if (*min_it < *max_it) {
			temp_res.push_back(*min_it);
			min_it++;
		}
		else if (*min_it > *max_it) {
			temp_res.push_back(*max_it);
			max_it++;
		}
	}

	while (min_it != min.end()) {
		temp_res.push_back(*min_it);
		min_it++;
	}

	while (max_it != max.end()) {
		temp_res.push_back(*max_it);
		max_it++;
	}

	return (temp_res);
}