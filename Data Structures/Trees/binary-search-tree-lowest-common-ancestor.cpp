// Binary Search Tree : Lowest Common Ancestor
// Day #117
// Wednesday, September 20, 2017
// https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor

/*
Node is defined as 

typedef struct node
{
   int data;
   node *left;
   node *right;
}node;

*/

node * lca(node *root, int v1, int v2) {
    
    if (v1 == root->data || v2 == root->data ||
        (v1 > root->data && v2 < root->data) ||
        (v2 > root->data && v1 < root->data)) { 
        
        return root; 
    
    } else if (v1 < root->data && v2 < root->data) {
        
        return lca(root->left, v1, v2);
        
    } else {
    
        return lca(root->right, v1, v2);
    
    } // if / else if / else
    
    // Case 1: v1 and v2 are both greater than current node
    // Go right, lca is below
    
    // Case 2: v1 and v2 are both less than current node
    // Go left, lca is below
    
    // Case 3: v1 and v2 are on opposite sides of lca
    // that node is lca
    
    // Case 4: v1 or v2 is equal to the current node
    // that node is lca
    
} // lca()