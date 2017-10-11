// Inserting a Node Into a Sorted Doubly Linked List
// Day #135
// Wednesday, October 11, 2017
// https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list

/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* SortedInsert(Node *head,int data) {

    Node * current = head;
    
    Node * newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    
    if (current == nullptr) { return newNode; }
    
    while(current->next != nullptr && data > current->data) {
        current = current->next;
        
    } // while

    if (current->next == nullptr) {
        
        if (data < current->data) {
            
            newNode->next = current;
            
            if (current->prev != nullptr) {
                
                newNode->prev = current->prev;
                newNode->prev->next = newNode;
                
            } else {
                
                head = newNode;
                
            }
            
            current->prev = newNode;
           
        } else {
            
            current->next = newNode;
            newNode->prev = current;
            
        } // if / else
        
    } else {
        
            newNode->next = current;
            
            if (current->prev != nullptr) {
                
                newNode->prev = current->prev;
                newNode->prev->next = newNode;
                   
            } else {
                
                head = newNode;
                
            }
        
            current->prev = newNode;
        
    } // if / else
    
    return head;
    
} // SortedInsert()