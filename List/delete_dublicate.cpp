#include "list.hpp"
#include <iostream>
#include <unordered_map>

void delete_dublicate(node *head) {
	std::unordered_map<int, int> count;
	node *tmp = head;
	node* tmp2 = head;

	++count[head->m_data];
	head = head->next;
	while (head) {
		if (++count[head->m_data] > 1) {
			head = delete_node(tmp);
			continue;
		}
		tmp = head;
		head = head->next;
	}
}
