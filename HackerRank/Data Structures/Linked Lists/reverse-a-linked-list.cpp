// Reverse a linked list
// Day #123
// Wednesday, September 27, 2017
// https://www.hackerrank.com/challenges/reverse-a-linked-list

/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head) {

    if (!head || !head->next) { return head; }
    
    Node * remain = Reverse(head->next);
    
    head->next->next = head;
    
    head->next = nullptr;
    
    return remain;
    
} // Reverse()