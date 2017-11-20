// Is This a Binary Search Tree?
// Day #136
// Thursday, October 12, 2017
// https://www.hackerrank.com/challenges/is-binary-search-tree

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
   bool checkBST(Node* root) {
    
       static Node * prev = nullptr;
       
       if (root) {
           
           if (!checkBST(root->left)) { return false; }
           
           if (prev != nullptr && root->data <= prev->data) { return false; }
           
           prev = root;
           
           return checkBST(root->right);
           
       } // if
       
       return true;
       
   } // checkBST()