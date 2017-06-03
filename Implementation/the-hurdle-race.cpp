// The Hurdle Race
// Day #35
// Saturday, June 3, 2017
// https://www.hackerrank.com/challenges/the-hurdle-race

#include <iostream>

using namespace std;


int main() {
    
    int num_hurdles;
    cin >> num_hurdles;
    
    int juice;
    cin >> juice;
    
    int temp;
    int beverages = 0;
    
    for (int i = 0; i < num_hurdles; i++) {
        
        cin >> temp;
        
        if (temp > juice && 
            temp > juice + beverages) {
            
            beverages = temp - juice;
            
        } // if
        
    } // for
    
    cout << beverages;
    
    return 0;
    
}