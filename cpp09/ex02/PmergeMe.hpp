#pragma once
# include <iostream>
# include <vector>
# include <list>
# include <stdlib.h>
# include <sstream>
# include <stdexcept>
# include <utility>
# include <algorithm>
# include <ctime>

int johnson_sort_vector(std::vector<int> base);
int johnson_sort_list(std::list<int> base);
std::vector<int> recup_min(std::vector<std::pair<int, int> > pairs, std::vector<int> single);
std::vector<int> recup_max(std::vector<std::pair<int, int> > pairs);
std::list<int> recup_min(std::list<std::pair<int, int> > pairs, std::list<int> single);
std::list<int> recup_max(std::list<std::pair<int, int> > pairs);
std::list<int> merge_insert(std::list<int> min, std::list<int> max);
std::vector<int> merge_insert(std::vector<int> min, std::vector<int> max);
