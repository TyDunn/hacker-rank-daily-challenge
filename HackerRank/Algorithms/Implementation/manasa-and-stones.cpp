// Manasa and Stones
// Day #69
// Thursday, July 13, 2017
// https://www.hackerrank.com/challenges/manasa-and-stones

#include <iostream>

using namespace std;


int main() {
    
    int num_tests;
    cin >> num_tests;
    
    for (int i = 0; i < num_tests; i++) {
        
        int num_stones, small, large;
        cin >> num_stones >> small >> large;
        
        if (small > large) {
            
            int temp = small;
            small = large;
            large = temp;
            
        } // if
        
        if (small == large) {
            
            cout << small * (num_stones - 1) << endl;
            
        } else {
        
            int diff = large - small;

            int current = small * (num_stones - 1);

            while (current <= large * (num_stones - 1)) {

                cout << current << " ";

                current += diff;

            } // while
            
            cout << endl;
            
        } // if / else
        
    } // for
    
    return 0;

} // main()