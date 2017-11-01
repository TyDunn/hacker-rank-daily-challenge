// Staircase
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/staircase

#include <string>
#include <iostream>
using namespace std;


int main() {
    
    int size;
    cin >> size;
    
    string temp;
    
    for (int i = 0; i < size; i++) {
        
        temp += " ";
        
    } // for
    
    for (int i = size - 1; i >= 0; i--) {
        
        temp[i] = '#';
        
        cout << temp << endl;
        
    } // for
    
    return 0;
}
