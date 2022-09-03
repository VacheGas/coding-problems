#include <iostream>
#include <string> 

std::string compression(std::string source) {
	std::string dest;
	int i = 0;
	int count = 0;
	char flag = source[0];
	bool more_one = false;

	dest.reserve(source.length() * 2);
	while (source[i]) {
		if (flag != source[i]) {
			dest.push_back(flag);
			dest.append(std::to_string(count));
			flag = source[i];
			if (count > 1) { more_one = true; };
			count = 0;
		}
		i++;
		++count;
	}
	dest.push_back(flag);
	dest.append(std::to_string(count));
	if (count > 1) { more_one = true; };
	if (more_one) {
		return dest;
	} else {
		return source;
	}
}