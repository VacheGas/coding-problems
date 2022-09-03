#include <iostream>

bool remove_case(std::string::iterator great, std::string::iterator low, std::string::iterator low_end) { // check remove case

	bool used = false;

	while (low != low_end) {
		if (*great != *low) {
			if (!used) {
				used = true;
			} else {
				return false;
			}
			std::cout << *great << ' ' << *low<< std::endl;
			++great;
			continue;
		}
		++low;
		++great;
	}
	return true;
}

bool replace_case(std::string::iterator great, std::string::iterator low, std::string::iterator low_end) { // check replace case 
	
	bool used = false;

	while (low != low_end) {
		if (*great != *low) {
			if (!used) {
				used = true;
			} else {
				return false;
			}
		}
		++low;
		++great;
	}
	return true;
}

bool one_away(std::string str1, std::string str2) {
	int len1 = str1.length();
	int len2 = str2.length();

	if (std::abs(len1 - len2) > 1) {
		return false;
	}
	std::string::iterator great;
	std::string::iterator low;
	std::string::iterator low_end;
	if (str1.length() > str2.length()) {
		great = str1.begin();
		low = str2.begin();
		low_end = str2.end();
	} else {
		great = str2.begin();
		low = str1.begin();
		low_end = str1.end();
	}
	if (len1 != len2) {
		return (remove_case(great, low, low_end));
	}
	return(replace_case(great, low, low_end));
	return false;
}