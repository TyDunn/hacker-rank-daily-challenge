// Binary Search Tree : Insertion
// Day #114
// Sunday, September 17, 2017
// https://www.hackerrank.com/challenges/binary-search-tree-insertion

/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

node * insert(node * root, int value) {
   
   // Build newNode
   node * newNode = new node();
   newNode->data = value;
   newNode->left = nullptr;
   newNode->right = nullptr;
   
   // Ensure root exists
   if (root == nullptr) { return newNode; }
    
   node * current = root;
   
   // Find leaf where newNode fits
   while (current != nullptr) {
       
       if (value < current->data) {
           
           if (current->left == nullptr) {
               
               current->left = newNode;
               break;
               
           } else { 
               
               current = current->left;
           
           }
           
       } else {
           
           if (current->right == nullptr) {
               
               current->right = newNode;
               break;
               
           } else { 
               
               current = current->right;
           
           }
           
       } // if / else
       
   } // while
    
   return root;
    
} // insert()