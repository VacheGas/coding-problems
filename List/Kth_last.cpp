#include "list.hpp"
#include <iostream>

node* Kth_last(node *head, int k) {
	node *prev = head;
	
	while (head && k) {
		head = head->next;
		--k;
	}
	if (head == nullptr && k != 0) {
		return head;
	}
	while (head) {
		head = head->next;
		prev = prev->next;
	}
	return prev;
}
