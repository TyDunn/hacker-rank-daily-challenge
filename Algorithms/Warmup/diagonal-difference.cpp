// Diagonal Difference
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/diagonal-difference

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    int left_diag = 0;
    int right_diag = 0;
    int curr_input;
    
    for (int i = 0; i < num; i++) {
        
        for (int j = 0; j < num; j++) {
            
            cin >> curr_input;
            
            if (i == j) {
                
                left_diag += curr_input;
                
            } // if
            
            if (i + j == num - 1) {
                
                right_diag += curr_input;
                
            } // if
            
        } // for
        
    } // for
    
    cout << abs(left_diag - right_diag);
    
    return 0;
}