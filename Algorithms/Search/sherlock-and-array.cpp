// Sherlock and Array
// Day #92
// Monday, August 21, 2017
// https://www.hackerrank.com/challenges/sherlock-and-array

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int tests;
    cin >> tests;
    
    for (int i = 0; i < tests; i++) {
        
        bool exists = false;
        
        int size;
        cin >> size;
        
        if (size == 1) { 
        
            exists = true;
            int temp;
            cin >> temp;
        
        } else {
            
            vector<int> arr(size);
            
            int left = 0;
            int right = 0;
            
            for (int j = 0; j < size; j++) {
                
                cin >> arr[j];
                
                right += arr[j];
                
            } // for j

            right -= arr[0];
            
            for (int k = 1; k < size; k++) {
                
                left += arr[k-1];
                
                right -= arr[k];
                
                if (left == right) { exists = true; }
                
            } // for k
            
        } // if / else
        
        (exists) ? (cout << "YES" << endl) : (cout << "NO" << endl);
        
    } // for i
    
    return 0;
    
} // main()