#include <iostream>

void URLify(std::string& str) {
	int i = 0;
	int len = str.length();
	std::string replaced_str;
	while (i < len - 1) {
		if (str[i] != ' ') {
			break;
		}
		++i;
	}
	bool see_space = false;
	while (i < len) {
		if (str[i] != ' ') {
			if (see_space) {
				replaced_str.push_back('%');
				replaced_str.push_back('2');
				replaced_str.push_back('0');
				see_space = false;
			}
			
			replaced_str.push_back(str[i]);
		} else {
			see_space = true;
		}
		++i;
	}
	str = replaced_str;
}