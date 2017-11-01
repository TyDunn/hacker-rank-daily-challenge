// Minimum Absolute Difference in an Array
// Day #93
// Tuesday, August 22, 2017
// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int minAbsDiff(vector<int> & arr) {
    
    sort(arr.begin(), arr.end());
    
    int min = abs(arr[1] - arr[0]);
    
    for (int i = 2; i < arr.size(); i++) {
        
        if (abs(arr[i] - arr[i-1]) < min) {
            
            min = abs(arr[i] - arr[i-1]);
            
        } // if
        
    } // for
    
    return min;
                      
} // minAbsDiff()


int main() {
    
    int num;
    cin >> num;
    
    vector<int> arr(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> arr[i];
        
    } // for
    
    int result = minAbsDiff(arr);
    
    cout << result << endl;
    
    return 0;
    
} // main()