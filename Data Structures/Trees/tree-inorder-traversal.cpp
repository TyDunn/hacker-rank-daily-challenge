// Tree: Inorder Traversal
// Day #107
// Sunday, September 10, 2017
// https://www.hackerrank.com/challenges/tree-inorder-traversal

/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {

    if(root == nullptr){ return; }
    
    inOrder(root->left);
    
    cout << root->data << " ";
    
    inOrder(root->right);
    
} // inOrder()