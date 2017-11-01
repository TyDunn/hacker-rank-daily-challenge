// Tree: Preorder Traversal
// Day #107
// Sunday, September 10, 2017
// https://www.hackerrank.com/challenges/tree-preorder-traversal


/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {

    if(root == nullptr){ return; }
    
    cout << root->data << " ";
    
    preOrder(root->left);
    
    preOrder(root->right);
    
} // preOrder()