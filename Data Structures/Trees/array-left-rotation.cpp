// Left Rotation
// Day #115
// Monday, September 18, 2017
// https://www.hackerrank.com/challenges/array-left-rotation

#include <vector>
#include <iostream>

using namespace std;

int main() {
    
    int num, rot;
    cin >> num >> rot;
    
    vector<int> arr(num);
    
    for (int i = 0; i < num; i++) {
        
        int idx = i - rot;
        
        if (idx < 0) { idx = num + idx; }
        
        cin >> arr[idx];
        
    } // for
    
    for (auto itr : arr) { cout << itr << " "; }
    
    return 0;
    
} // main()