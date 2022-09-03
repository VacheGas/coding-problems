#include "list.hpp"
#include <iostream>

node* partition(node *head, int part) {
	node *threshold = head;

	while (threshold) {
		if (threshold->m_data >= part) {
			break;
		}
		threshold = threshold->next;
	}
	node *it = threshold;
	node *prev_tmp = nullptr;
	while (it) {
		node *tmp = it;
		if (it->m_data < part) {
			if (prev_tmp) {
				prev_tmp->next = tmp->next;
				tmp->next = head;
				it = prev_tmp;
			}
			head = tmp;
		}
		prev_tmp = it;
		it = it->next;
	}
	return  head;
}
