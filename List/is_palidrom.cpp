#include "list.hpp"
#include <iostream>
#include <stack>

bool is_palidrom(node *word) {
	std::stack<node *> storage;
	node *tmp = word;

	if (word == nullptr) {
		return false;
	}
	while (tmp) {
		storage.push(tmp);
		tmp = tmp->next;
	}
	while(word) {
		if (word == storage.top()) {
			return true;
		}
		if (word->m_data != storage.top()->m_data) {
			return false;
		}
		storage.pop();
		word = word->next;
	}
	return true;
}