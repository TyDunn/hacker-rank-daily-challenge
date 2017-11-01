// Reverse a doubly linked list
// Day #124
// Thursday, September 28, 2017
// https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list

/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head) {

    if (!head) { return nullptr; }
    
    Node * temp = head->next;
    head->next = head->prev;
    head->prev = temp;
    
    if (!head->prev) { return head; }
    
    return Reverse(head->prev);
    
} // Reverse()
