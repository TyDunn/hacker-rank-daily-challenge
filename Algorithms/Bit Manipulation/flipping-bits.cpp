// Flipping bits
// Day #106
// Saturday, September 9, 2017
// https://www.hackerrank.com/challenges/flipping-bits

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        unsigned int og, flipNum;
        cin >> og;
        flipNum = ~og;
        cout << flipNum << endl;
        
    } // for
    
    return 0;
    
} // main()