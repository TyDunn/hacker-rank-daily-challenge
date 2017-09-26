// Delete a Node
// Day #122
// Tuesday, September 26, 2017
// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list

/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Delete(Node *head, int position) {

    if (head == nullptr || head->next == nullptr) { return nullptr; }
    
    if (position == 0) { return head->next; }
    
    Node * cur = head;
    
    while (position > 1) {
        
        cur = cur->next;
        --position;
        
    } // while
    
    Node * prev = cur;
    cur = cur->next;
    prev->next = cur->next;
    
    return head;
    
} // Delete()