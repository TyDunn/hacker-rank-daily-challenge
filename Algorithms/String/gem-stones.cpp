// Gemstones
// Day #82
// Monday, July 31, 2017
// https://www.hackerrank.com/challenges/gem-stones

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    string input;
    int elements = 0x7FFFFFFF;
    
    while (num--) {
        
        cin >> input;
        
        int current = 0;
        
        for (char let : input) { 
            
            current |= 1 << (let - 'a');
        
        } // for
        
        elements &= current;
    
    } // while
    
    int result = 0;
    
    while (elements) { 
        
        result += elements & 1; 
        elements >>= 1; 
    
    } // while
    
    cout << result << endl;
    
    return 0;
    
} // main()