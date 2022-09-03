#include <unordered_map>
#include <iostream>

bool is_unique(std::string str) {
	std::unordered_map<char, int> checker;

	for (auto i : str) {
		checker[i]++;
	}
	for (auto &&i : checker) {
		if (i.second > 1) {
			return false;
		}
	}
	return true;
}