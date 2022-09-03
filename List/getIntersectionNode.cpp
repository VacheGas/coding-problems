#include "list.hpp"
#include <iostream>
#include <unordered_map>

node *getIntersectionNode(node *headA, node *headB) {
	std::unordered_map<node *, int> storage;
		
	while(headA || headB) {
		if (headA) {
			if (storage[headA] == 1) {
				return headA;
			}
			storage[headA]  = 1;
			headA = headA->next;
		}
		if (headB) {
			if (storage[headB] == 1) {
				return headB;
			}
			storage[headB]  = 1;
			headB = headB->next;
		}
	}
		return nullptr;
}