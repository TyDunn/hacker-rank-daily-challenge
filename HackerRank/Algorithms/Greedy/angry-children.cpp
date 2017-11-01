// Max Min
// Day #141
// Friday, October 20, 2017
// https://www.hackerrank.com/challenges/angry-children

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;
    
    int unfair = std::numeric_limits<int>::max();
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
        
    } // for
    
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n-k+1; i++) {
        
        int min = arr[i];
        int max = arr[i+k-1];
        
        if (max - min < unfair) { unfair = max - min; }
        
    } // for
    
    cout << unfair << endl;
    
    return 0;
    
} // main()