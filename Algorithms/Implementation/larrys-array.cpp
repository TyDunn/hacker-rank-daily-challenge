// Larry's Array
// Day #140
// Thursday, October 19, 2017
// https://www.hackerrank.com/challenges/larrys-array

#include <vector>
#include <iostream>

using namespace std;

int check_inversions(vector<int>&);

int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        int size;
        cin >> size;
        
        vector<int> arr(size);
        
        for (int j = 0; j < size; j++) {
            
            cin >> arr[j];   
            
        } // for
        
        int inv = check_inversions(arr);
        
        (inv % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
        
    } // for
    
    return 0;
    
} // main()

int check_inversions(vector<int> & arr) {
    
    int inv = 0;
    
    for (int i = 0; i < arr.size() - 1; i++) {
        
        for (int j = i+1; j < arr.size(); j++) {
            
            if (arr[i] > arr[j]) {
            
                ++inv;
                
            } // if
            
        } // for
        
    } // for
    
    return inv;
    
} // for