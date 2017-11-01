// Tree: Level Order Traversal
// Day #113
// Saturday, September 16, 2017
// https://www.hackerrank.com/challenges/tree-level-order-traversal

#include <iostream>
#include <queue>

/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  
    queue<node*> q;
    
    q.push(root);
    
    while (!q.empty()) {
        
        if (q.front()->left != nullptr) { q.push(q.front()->left); }
        
        if (q.front()->right != nullptr) { q.push(q.front()->right); }
        
        cout << q.front()->data << " ";
        
        q.pop();
        
    } // while
    
} // levelOrder()