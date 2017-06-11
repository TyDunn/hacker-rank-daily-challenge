// Circular Array Rotation 
// Day #42
// Saturday, June 10, 2017
// https://www.hackerrank.com/challenges/circular-array-rotation

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int elements;
    cin >> elements;
    
    int operations;
    cin >> operations;
    
    int queries;
    cin >> queries;
    
    int rotations = operations % elements;
    
    vector<int> list(elements);
    
    for (int i = 0; i < elements; i++) {
        
        cin >> list[i];
        
    } // for
    
    for (int j = 0; j < queries; j++) {
        
        int index;
        cin >> index;
        
        if (index - rotations >= 0) {
            
            cout << list[index - rotations] << endl;
            
        } else {
            
            cout << list[index - rotations + list.size()] << endl;
            
        } // if / else
        
    } // for
    
    return 0;

} // main()