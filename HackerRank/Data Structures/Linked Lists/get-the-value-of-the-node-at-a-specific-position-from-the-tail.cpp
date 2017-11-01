// Get Node Value
// Day #124
// Thursday, September 28, 2017
// https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail) {

    int idx = 0;
    Node * front = head;
    Node * back = head;
    
    while (front != nullptr) {
        
        front = front->next;
               
        if (idx++ > positionFromTail) { back = back->next; }
        
    } // while
    
    return back->data;
    
} // GetNode()