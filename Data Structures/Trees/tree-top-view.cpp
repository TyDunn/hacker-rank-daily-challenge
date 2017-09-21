// Tree : Top View
// Day #118
// Thursday, September 21, 2017
// https://www.hackerrank.com/challenges/tree-top-view

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void leftView(node * root) {
    
    if (root->left != nullptr) { leftView(root->left); }
    
    cout << root->data << " ";
    
} // leftView()

void rightView(node * root) {
    
    cout << root->data << " ";
    
    if (root->right != nullptr) { rightView(root->right); }
    
} // leftView()

void topView(node * root) {
 
    if (root->left != nullptr) { leftView(root->left); }
    
    if (root != nullptr) { cout << root->data << " "; }
    
    if (root->right != nullptr) { rightView(root->right); }
    
} // topView()