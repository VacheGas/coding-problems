#include "list.hpp"
#include <iostream>

void delete_mid(node *target) {
	node *tmp = target;

	target->m_data = target->next->m_data;
	delete_node(target);
}
