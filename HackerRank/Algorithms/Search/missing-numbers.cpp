// Missing Numbers
// Day #91
// Tuesday, August 15, 2017
// https://www.hackerrank.com/challenges/missing-numbers
#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    vector<int> possible(201);
    
    int num;
    cin >> num;
    
    int pivot;
    cin >> pivot;
    --possible[100];
    
    for (int i = 0; i < num - 1; i++) {
        
        int temp;
        cin >> temp;
        --possible[temp - pivot + 100];
        
    } // for i
    
    cin >> num;
    
    for (int j = 0; j < num; j++) {
        
        int temp;
        cin >> temp;
        ++possible[temp - pivot + 100];
        
    } // for j
    
    for (int k = 0; k < possible.size(); k++) {
        
        if (possible[k] > 0) { cout << pivot - 100 + k << " "; }
        
    } // for k
    
    return 0;

} // main()