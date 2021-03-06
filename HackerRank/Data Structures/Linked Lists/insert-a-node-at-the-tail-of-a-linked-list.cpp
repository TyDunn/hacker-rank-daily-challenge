// Insert a Node at the Tail of a Linked List
// Day #122
// Tuesday, September 26, 2017
// https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data) {
    
    if (head == nullptr) {
        
        head = new Node();
        head->data = data;
        head->next = nullptr;
        
        return head;
        
    }
    
    Node * cur = head;
    
    while (cur->next != nullptr) { cur = cur->next; } // while
    
    Node * next = new Node();
    next->data = data;
    cur->next = next;
    
    return head;
        
} // Insert()