#include <iostream>
#include "list.hpp"



int main() {
    node* head = nullptr;
    node* head2 = nullptr;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 1);
    //delete_dublicate(head);
   
   std::cout << is_palidrom(head) << '\n';
    //std::cout << test->m_data << std::endl;
    display(head);
   //delete_by_value(head->next);
}