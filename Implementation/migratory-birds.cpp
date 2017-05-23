// Migratory Birds
// Day #24
// Tuesday, May 23, 2017
// https://www.hackerrank.com/challenges/migratory-birds

#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    vector<int> types(5);
    
    int type;
    
    for (int i = 0; i < num; i++) {
        
        cin >> type;
        
        types[--type]++;
        
    } // for
    
    int highestFreq = 0;
    
    for (int j = 1; j < 5; j++) {
        
        if (types[j] > types[highestFreq]) {
                
            highestFreq = j;
                
        } else if (types[j] == types[highestFreq]) {
            
            if (j < highestFreq) { highestFreq = j; }
            
        } // else-if
        
    } // for

    cout << ++highestFreq; 
    
    return 0;
    
} // main()