// Picking Numbers
// Day #33
// Thursday, June 1, 2017
// https://www.hackerrank.com/challenges/picking-numbers

#include <vector>
#include <iostream>

using namespace std;

int main() {
   
    int max = 0; // biggest subset
    
    int num; // # of elements
    cin >> num;
    
    vector<int> arr(100, 0); // all possible #s
    
    int temp; // used to store cin
    
    for (int i = 0; i < num; i++){
    
        cin >> temp;

        arr[temp]++;
    
    } // for
    
    for (int i = 0; i < num - 1; i++) {
        
        if(arr[i] + arr[i+1] > max) { 
            
            max = arr[i] + arr[i+1];
        
        } // if
    
    } // for
    
    cout << max;
    
    return 0;
}