// Pangrams
// Day #78
// Thursday, July 27, 2017
// https://www.hackerrank.com/challenges/pangrams

#include <string>
#include <iostream>

using namespace std;


int main() {
    
    string input;
    getline(cin, input);
    
    for (auto &let : input) {
        
        let = tolower(let);
        
    } // for
    
    sort(input.begin(), input.end()); // alphanumeric sort
    
    input.erase(unique(input.begin(), input.end()), input.end());
    
    input.erase(input.begin()); // delete ' '
    
    if (input.length() == 26) {
        
        cout << "pangram" << endl;
        
    } else {
        
        cout << "not pangram" << endl;
        
    } // if / else
    
    return 0;
    
} // main()