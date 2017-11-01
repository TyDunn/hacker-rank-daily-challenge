// Compare two linked lists
// Day #123
// Wednesday, September 27, 2017
// https://www.hackerrank.com/challenges/compare-two-linked-lists

/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int CompareLists(Node *headA, Node* headB) {
  
    while (headA != nullptr && headB != nullptr) {
        
        if (headA->data != headB->data) { return 0; }
        headA = headA->next;
        headB = headB->next;
        
    } // while
    
    return headA == headB;

} // CompareLists()