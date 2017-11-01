// Sherlock and The Beast
// Day #98
// Thursday, August 31, 2017
// https://www.hackerrank.com/challenges/sherlock-and-the-beast

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        int fives = 0, threes = 0;
        cin >> fives;
        
        while (fives >= 0 && ((fives % 3) != 0 || (threes % 5) != 0)) {
            
            --fives;
            ++threes;
            
        } // while
        
        if ((fives % 3) != 0 || (threes % 5) != 0) {
            
            cout << -1 << endl;
            
        } else {
            
            string output = "";

            while (fives > 0) {

                output += "5";
                --fives;

            } // while fives

            while (threes > 0) {

                output += "3";
                --threes;

            } // while threes

            cout << output << endl;

            } // if / else
        
    } // for
    
    return 0;
    
} // main()