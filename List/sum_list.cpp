#include <iostream>
#include "list.hpp"

node* sum_list (node *sum1, node *sum2) {
	int sum = 0;
	int sum1_degree = 1;

	while (sum1) {
		sum += sum1->m_data * sum1_degree;
		sum1 = sum1->next;
		sum1_degree *= 10;
	}
	int sum2_degree = 1;
	while (sum2) {
		sum += sum2->m_data * sum2_degree;
		sum2 = sum2->next;
		sum2_degree *= 10;
	}
	node *new_node = nullptr;
	int degree = std::max(sum1_degree, sum2_degree) / 10;
	while (sum) {
		int balance = sum / degree;
		sum = sum % degree;
		degree = degree / 10;
		insert(&new_node, balance);
	}
	return new_node;	
}
