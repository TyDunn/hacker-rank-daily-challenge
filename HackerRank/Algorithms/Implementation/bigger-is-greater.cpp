// Bigger is Greater
// Day #59
// Wednesday, June 28, 2017
// https://www.hackerrank.com/challenges/bigger-is-greater

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    string og;
    
    for (int i = 0; i < num; i++) {
        
        cin >> og;
    
        if (next_permutation(og.begin(), og.end())) {
            
            cout << og << endl;
            
        } else {
            
            cout << "no answer" << endl;
            
        } // if / else
        
    } // for
    
    return 0;
    
} // main()