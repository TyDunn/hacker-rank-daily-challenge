// Sherlock and Squares
// Day #48
// Friday, June 16, 2017
// https://www.hackerrank.com/challenges/sherlock-and-squares

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int num; // # of test cases
    cin >> num;
    
    int start; // first number
    int end; // second number
    
    for (int i = 0; i < num; i++) {
        
        cin >> start >> end;
        
        if (ceil(sqrt(start)) > floor(sqrt(end))) {
            
            cout << 0 << endl;
            
        } else if (ceil(sqrt(start)) == floor(sqrt(end))) {
            
           cout << 1 << endl; 
            
        } else {
            
            cout << 1 + floor(sqrt(end)) - ceil(sqrt(start)) << endl;
            
        } // if / else
        
    } // for
    
    return 0;

} // main()