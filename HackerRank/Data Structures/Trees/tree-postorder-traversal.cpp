// Tree: Postorder Traversal
// Day #107
// Sunday, September 10, 2017
// https://www.hackerrank.com/challenges/tree-postorder-traversal

/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root) {

    if(root == nullptr){ return; }
    
    postOrder(root->left);
    
    postOrder(root->right);
    
    cout << root->data << " ";
    
} // postOrder()