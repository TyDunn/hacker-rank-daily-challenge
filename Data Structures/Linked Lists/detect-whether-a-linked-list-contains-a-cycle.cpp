// Cycle Detection
// Day #130
// Thursday, October 5, 2017
// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {

    if (head == nullptr) { return false; }
    
    Node * slow = head;
    Node * fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) { return true; }
        
    } // while
    
    return false;
    
} // has_cycle()