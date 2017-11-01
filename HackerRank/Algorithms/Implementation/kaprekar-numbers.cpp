// Modified Kaprekar Numbers
// Day #60
// Thursday, June 29, 2017
// https://www.hackerrank.com/challenges/kaprekar-numbers

#include <iostream>
#include <algorithm>

using namespace std;

bool isKaprekarNum(long);

int main() {
    
    long start, end;
    cin >> start >> end;
    
    bool isValidRange = false;
    
    for (long i = start; i <= end; i++) {
        
        if (isKaprekarNum(i)) {
            
            isValidRange = true;
            
        } // if
        
    } // for
    
    if (!isValidRange) {
        
        cout << "INVALID RANGE";
        
    } // if
    
    return 0;

} // main()

bool isKaprekarNum(long num) {
    
    long squared = num * num;
    
    string str = to_string(squared);
    string left = str.substr(0, str.length() / 2);
    string right = str.substr(str.length() / 2);
    
    long numLeft, numRight = 0;
    
    if (!left.empty()) { numLeft = stol(left); }
    if (!right.empty()) { numRight = stol(right); }
    
    if (numLeft + numRight == num) {
        
        cout << num << " ";
        return true;
        
    } else {
        
        return false;
        
    } // if / else
    
} // isKaprekarNum()