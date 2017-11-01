// Tree: Huffman Decoding
// Day #129
// Wednesday, October 4, 2017
// https://www.hackerrank.com/challenges/tree-huffman-decoding

/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

void decode_huff(node * root, string s) {
    
    string decoded;
    
    node * current = root;
    
    for (int i = 0; i < s.size(); i++) {
        
        current = (s[i] == '1') ? (current->right) : (current->left);
        
        if (!current->left && !current->right) {
            
            decoded.push_back(current->data);
            
            current = root;
            
        } // if
        
    } // for
    
    cout << decoded << endl;
    
} // decode_huff()