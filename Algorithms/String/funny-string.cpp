// Funny String
// Day #81
// Sunday, July 23, 2017
// https://www.hackerrank.com/challenges/funny-string


#include <cmath>
#include <string>
#include <iostream>
using namespace std;


int main() {
    
    int tests;
    cin >> tests;
    
    for (int i = 0; i < tests; i++) {
        
        bool funny = true;
        
        string input;
        cin >> input;
        
        for (int j = 0; j < input.size() / 2; j++) {
            
            if (abs(input[j] - input[j+1]) != 
                abs(input[input.size() - j - 1] - 
                input[input.size() - j - 2])) {
                
                funny = false;
                
            } // if
            
        } // for j
        
        cout << (funny ? "Funny" : "Not Funny") << endl;
        
    } // for i
    
    return 0;
    
} // main()