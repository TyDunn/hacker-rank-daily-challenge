// Self Balancing Tree
// Day #109
// Tuesday, September 12, 2017
// https://www.hackerrank.com/challenges/self-balancing-tree

// NOTICE: SEGFAULTING!!!!
// Ran out of time to finish debugging...

/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

node * createNode(node *, int);
int getBalance(node *);
node * rightRotate(node *);
node * leftRotate(node *);

node * insert(node * root, int val) {
    
    // Normal BST Insertion
    if (root = nullptr) {
        
        return createNode(root, val);
        
    } // if
    
   
   if (val < root->val) {
       
       root->left = insert(root->left, val);
   
   } else if (val > root->val) {
       
       root->right = insert(root->right, val);
       
   } else {
       
       return root; // all values distinct
       
   } // if / else if / else
   
   // Update height of ancestor
   root->ht = 1 + max(root->left->ht, root->right->ht);
    
   // Check if this node become unbalanced
   int balance = getBalance(root);
   
   // Left Left Case
   if (balance > 1 && val < root->left->val) {
       
       return rightRotate(root);
       
   } // if
    
   // Right Right Case
   if (balance < -1 && val > root->right->val) {
       
       return leftRotate(root);
       
   } // if
    
   // Left Right Case
   if (balance > 1 && val > root->left->val) {
       
       root->left = leftRotate(root->left);
       return rightRotate(root);
       
   } // if
    
    // Right LEft Case
   if (balance < -1 && val < root->right->val) {
       
       root->right = rightRotate(root->right);
       return leftRotate(root);
       
   } // if
   
   return root;
    
} // insert()

node * createNode(node * root, int val) {
    
    root = new node;
    
    root->val = val;
    root->left = nullptr;
    root->right = nullptr;
    root->ht = 0; // leaf node height = 0
    
    return root;
    
} // createNode()

int getBalance(node * node) {
    
    if (node == nullptr) { return 0; }
    
    return node->left->ht - node->right->ht;
    
} // getBalance

node * rightRotate(node * node) {
    
    struct node * a = node->left;
    struct node * b = node->right;
    
    // Perform rotation
    a->right = node;
    node->left = b;
    
    // Update heights
    
    node->ht = max(node->left->ht, node->right->ht + 1);
    a->ht = max(a->left->ht, a->right->ht + 1);
    
    // Return new root
    return a;
    
} // rightRotate()

node * leftRotate(node * node) {
    
    struct node * a = node->right;
    struct node * b = a->left;
    
    // Perform rotation
    b->left = node;
    node->right = b;
    
    // Update heights
    node->ht = max(node->left->ht, node->right->ht + 1);
    a->ht = max(a->left->ht, a->right->ht + 1);
    
    // Return new root
    return a;
    
} // leftRotate()