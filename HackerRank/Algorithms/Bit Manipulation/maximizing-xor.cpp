// Maximizing XOR
// Day #104
// Thursday, September 7, 2017
// https://www.hackerrank.com/challenges/maximizing-xor

#include <iostream>

using namespace std;


int main() {
    
    int start, end;
    cin >> start >> end;
    
    int max = 0;
    
    for (int i = start; i <= end; i++) {
        
        for (int j = start; j <= end; j++) {
            
            if ((i ^ j) > max) { max = (i ^ j); }
            
        } // for j
        
    } // for i
    
    cout << max << endl;
    
    return 0;
    
} // main()