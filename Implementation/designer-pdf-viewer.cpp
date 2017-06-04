// Designer PDF Viewer
// Day #36
// Sunday, June 4, 2017
// https://www.hackerrank.com/challenges/designer-pdf-viewer

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    vector<int> alphabet(26);
    
    for (int letter = 0; letter < 26; letter++) {
        
        cin >> alphabet[letter];
        
    } // for
    
    string word;
    cin >> word;
    
    // ASCII value of 'a' is 97
    int max = alphabet[int(word[0]) - 97];
    
    for (int i = 1; i < word.length(); i++) {
        
        if (alphabet[int(word[i]) - 97] > max) {
            
            max = alphabet[int(word[i]) - 97];
            
        } // if
        
    } // for
    
    cout << word.length() * 1 * max << endl;
    
    return 0;
    
} // main()