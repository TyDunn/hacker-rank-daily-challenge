// Find Merge Point of Two Lists
// Day #125
// Friday, September 29, 2017
// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB) {

    Node * curA = headA;
    Node * curB = headB;
    
    while (curA != curB) {
        
        // curA
        if (curA->next == nullptr) {
            
            curA = headB;
            
        } else {
            
            curA = curA->next;
            
        } // if / else
        
        // curB
        if (curB->next == nullptr) {
            
            curB = headA;
            
        } else {
            
            curB = curB->next;
            
        } // if / else
        
    } // while
    
    return curB->data;
    
} // FindMergeNode()