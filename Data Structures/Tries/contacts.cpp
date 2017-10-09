// Contacts
// Day #133
// Monday, October 9, 2017
// https://www.hackerrank.com/challenges/contacts

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

struct node {
    
    node * children[26] = {NULL};
    int count = 0;
    
}; // node()

void add_node(node * root, string name, int cur) {
    
    root->count += 1;
    
    if (cur == name.size()) { return; }
    
    if (!root->children[name[cur]-'a']) {
        
        root->children[name[cur]-'a'] = new node();
        
    } // if
    
    add_node(root->children[name[cur]-'a'], name, cur+1);
    
} // add_node()

int find_node(node * root, string name, int cur) {
    
    if (cur == name.size()) { 
        
        return root->count; 
    
    } else if (!root->children[name[cur]-'a']) {
        
        return 0;
        
    } else {
        
        return find_node(root->children[name[cur]-'a'], name, cur+1);
        
    } // if / else if / else
    
} // find_node

int main() {
    
    int num;
    cin >> num;
    
    string cmd, cnt;
    
    unordered_set<string> contact_book;
    
    node * root = new node();
    
    for (int i = 0; i < num; i++) {
        
        cin >> cmd >> cnt;
        
        if (cmd == "add") {
            
            if (contact_book.find(cnt) == contact_book.end()) {
                
                contact_book.insert(cnt);
                add_node(root, cnt, 0);
                
            } // if
            
        } else if (cmd == "find") {
            
            cout << find_node(root, cnt, 0) << endl;
            
        } // if / else if
        
    } // for
    
    return 0;

} // main()