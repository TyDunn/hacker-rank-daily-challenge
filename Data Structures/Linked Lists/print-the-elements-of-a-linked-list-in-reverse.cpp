// Print in Reverse
// Day #123
// Wednesday, September 27, 2017
// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse

/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head) {

    if (!head) { return; }
    
    ReversePrint(head->next);
    
    cout << head->data << endl;
    
} // ReversePrint()