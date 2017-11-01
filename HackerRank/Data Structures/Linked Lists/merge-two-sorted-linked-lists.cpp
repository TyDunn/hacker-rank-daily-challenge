// Merge two sorted linked lists
// Day #123
// Wednesday, September 27, 2017
// https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB) {

    if (headA == nullptr && headB == nullptr) { return nullptr; }

    if (headA == nullptr && headB != nullptr) { return headB; }
    
    if (headA != nullptr && headB == nullptr) { return headA; }

    if (headA->data < headB->data) { 
        
        headA->next = MergeLists(headA->next, headB); 
    
    } else {
        
        Node * temp = headB;
        headB = headB->next;
        temp->next = headA;
        headA = temp;
        headA->next = MergeLists(headA->next, headB);
        
    } // if / else
    
    return headA;
    
} // MergeLists()