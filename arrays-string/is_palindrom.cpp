#include <iostream>
#include <string> 

bool is_palindrom(std::string source) {
	int i = 0;
	int j = source.size() - 1;

	while (i < j) {
		if (source[i] == ' ' || source[j] == ' ') {
			if (source[i] == ' ') {
				++i;
				continue;
			}
			--j;
			continue;
		}
		if (source[i] != source[j]) {
			return false;
		}
		++i;
		--j;
	}
	return true;
}
