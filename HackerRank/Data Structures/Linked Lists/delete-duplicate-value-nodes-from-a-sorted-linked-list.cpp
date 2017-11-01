// Delete duplicate-value nodes from a sorted linked list
// Day #124
// Thursday, September 28, 2017
// https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list

/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* RemoveDuplicates(Node *head) {

    if (head == nullptr) { return head; }
    
    Node * curr = head->next;
    Node * prev = head;
    
    while (curr != nullptr) {
        
        if (prev->data == curr->data) {
            
            prev->next = curr->next;
            curr = curr->next;
            
        } else {
            
            
            prev = curr;
            curr = curr->next;   
            
        } // if / else
        
    } // while
    
    return head;
    
} // RemoveDuplicates()