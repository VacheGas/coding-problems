#include "list.hpp"
#include <iostream>

node *detectCycle(node *head) {
	node* slow = head;
	node* fast = head;
		
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow) break;
	}
	if (!fast || !fast->next) return nullptr;
	slow = head;
	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
	}	
	return slow;
}