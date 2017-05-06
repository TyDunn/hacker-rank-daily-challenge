// Intro to Tutorial Challenges
// Day #1
// Friday, April 28, 2017
// https://www.hackerrank.com/challenges/tutorial-intro

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int value; // the value that has to be searched
    cin >> value; // reading in value
    
    int size; // the size of the array
    cin >> size; // reading in size
    
    int index = 0; // current index
    
    int current = 0; // current value
    
    for (; index < size; index++) {
        
        cin >> current; // reading in current value
        
        if (value == current) {
            
            break; // escape loop, index found
            
        } // if value == index
        
    } // for num < size
    
    cout << index;
    
    return 0;

} // main()
