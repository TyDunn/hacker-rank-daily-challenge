// Array Manipulation
// Day #134
// Tuesday, October 10, 2017
// https://www.hackerrank.com/challenges/crush

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    
    vector<long> arr(n+1);
    
    for(int i = 0; i < m; i++){

        int a, b, k;
        
        cin >> a >> b >> k;
        
        arr[a] += k;
        
        if((b+1) <= n) { arr[b+1] -= k; }
        
    } // for
    
    long max = 0, curr = 0;
    
    for (int j = 1; j <= n; j++) {
            
        curr += arr[j];
            
        if (curr > max) { max = curr; }
            
    } // for
    
    cout << max << endl;
    
    return 0;
    
} // main()