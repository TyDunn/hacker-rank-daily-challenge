// Super Reduced String
// Day #79
// Friday, July 21, 2017
// https://www.hackerrank.com/challenges/reduced-string

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    string og;
    cin >> og;
    
    for (int i = 1; i < og.length(); i++) {
        
        if (og[i-1] == og[i]) {
            
            og.erase(i-1, 2);
            i = 0;
            
        } // if
        
    } // for
    
    if (og.empty()) {
    
        cout << "Empty String" << endl;
        
    } else {
        
        cout << og << endl;
        
    } // if / else
    
    return 0;
    
} // main()