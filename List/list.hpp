#ifndef LIST_HPP
#define LIST_HPP

struct node {
	int m_data;
	node* next;

	node(int d);
	node ();
};
void insert(node **head, int d);
node* delete_node(node *head);
void delete_mid(node *target);
void delete_dublicate(node *head);
void delete_front(node **head);
void display(node *head);
node* Kth_last(node *head, int k);
node* partition(node *head, int part);
node* sum_list (node *sum1, node *sum2);
bool is_palidrom(node *word);

#endif
