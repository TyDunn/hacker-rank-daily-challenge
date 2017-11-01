// Divisible Sum Pairs
// Day #23
// Monday, May 22, 2017
// https://www.hackerrank.com/challenges/divisible-sum-pairs

#include <vector>
#include <iostream>

using namespace std;

int main() {
    
    int count = 0;
    
    int n;
    cin >> n;
    
    int k;
    cin >> k;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
        
    } // for
    
    for (int i = 0; i < n; i++) {
        
        for (int j = n - 1; j > i; j--) {
            
            if ((arr[i] + arr[j]) % k == 0) {
                
                ++count;
                
            } // if
            
        } // for
        
    } // for
    
    cout << count;
    
    return 0;
}