// Print the Elements of a Linked List
// Day #122
// Tuesday, September 26, 2017
// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list

/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head) {

    if (!head) { return; }
    
    cout << head->data << endl;
    
    Print(head->next);
    
} // Print()