// Fair Rations
// Day #66
// Sunday, July 9, 2017
// https://www.hackerrank.com/challenges/fair-rations

#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    int loaves = 0;
    int carry = 0;
    
    while (--num) {
        
        int start;
        cin >> start;
        
        if ((carry + start) % 2) {
            
            loaves += 2;
            carry = 1;
        
        } else {
        
            carry = 0;
            
        } // if / else
    
    } // while
    
    if (carry) {
        
        cout << "NO" << endl;
    
    } else {
        
        cout << loaves << endl;
    
    } // if / else
        
    return 0;
    
} // main()