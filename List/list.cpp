#include "list.hpp"
#include <iostream>

node::node(int d) {
	next = nullptr;
	m_data = d;
}

node::node () {
	next = nullptr;
	m_data = 0;
}

void insert(node **head, int d) {
	node *end = new node(d);
	node *tmp = *head;

	if (tmp == nullptr) {
		*head = end;
		return;
	}
	while (tmp->next != nullptr) {
		tmp = tmp->next;
	}
	tmp->next = end;
}

node* delete_node(node *prev) {
	node *tmp = prev->next;
	prev->next = tmp->next;
	delete tmp;
	return prev->next;
}

void delete_front(node **head) {
	node *tmp = (*head);
	(*head) = (*head)->next;
	delete tmp;
}

void display(node *head) {
	node* tmp = head;

	while (tmp) {
		std::cout << tmp -> m_data << " ";
		tmp = tmp -> next;
	}
	tmp = nullptr;
}
