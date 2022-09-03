#include <unordered_map>
#include <iostream>

bool is_Permuted(std::string str1, std::string str2) {
	std::unordered_map<char, int> str1_count;
	std::unordered_map<char, int> str2_count;
	int len_str1 = str1.length();
	int len_str2 = str2.length();

	if (len_str1 != len_str2) {
		return false;
	}
	int i = 0;
	while (i < len_str1) {
		++str1_count[str1[i]];
		++str2_count[str2[i]];
		++i;
	}
	if (str1_count.size() != str2_count.size()) {
		return false;
	}
	for (auto i : str1_count) {
		
		if (i.second != str2_count[i.first]) {
			return false;
		}
	}
	return true;
}