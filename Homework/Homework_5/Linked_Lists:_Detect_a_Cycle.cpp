/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method

    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    Node* first = head;
    Node* second = head->next;

    while (second != nullptr && second->next != nullptr) {
        if (first == second) {
            return true; 
        }
        first = first->next;        
        second = second->next->next;    
    }

    return false; 

    
}