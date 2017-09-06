// Permuting Two Arrays
// Day #102
// Tuesday, September 5, 2017
// https://www.hackerrank.com/challenges/two-arrays

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        bool valid = true;
        
        int size, thld;
        cin >> size >> thld;
        
        vector<int> arrA(size);
        vector<int> arrB(size);
        
        for (int j = 0; j < size; j++) {
            
            cin >> arrA[j];
            
        } // for j
        
        for (int k = 0; k < size; k++) {
            
            cin >> arrB[k];
            
        } // for k
        
        sort(arrA.begin(), arrA.end());
        sort(arrB.begin(), arrB.end(), greater<int>());
        
        for (int l = 0; l < size; l++) {
            
            if (arrA[l] + arrB[l] < thld) {
                
                valid = false;
                
            } // if
            
        } // for l
        
        (valid) ? (cout << "YES" << endl) : (cout << "NO" << endl);
        
    } // for
    
    return 0;
    
} // main()