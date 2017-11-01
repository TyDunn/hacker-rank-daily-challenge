// Insert a node at a specific position in a linked list
// Day #122
// Tuesday, September 26, 2017
// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list

/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* InsertNth(Node *head, int data, int position) {

    Node * nthNode = new Node();
    nthNode->data = data;
    
    Node * curNode = head;

    if (position == 0) { 
        
        nthNode->next = head;
        return nthNode;
    
    } // if
        
    while (--position) { curNode = curNode->next; }
    
    nthNode->next = curNode->next;
    curNode->next = nthNode;

    return head;
    
} // InsertNth()