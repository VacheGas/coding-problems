#include <iostream>

bool is_substring(std::string s, std::string x) {
	if(x.size() <= s.size())
	{
		int p = x.size();
		for(int i = 0; i < s.size(); ++i)
		{
			if(s[i] == x[0])
			{
				if((s.size() - i >= p  && s[i + p - 1] == x[p - 1]) && s.substr(i, p) == x)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool is_rot(std::string source, std::string goal) {
	source = source + source;
	return is_substring(source, goal);

}
