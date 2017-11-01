// Mars Exploration
// Day #76
// Tuesday, July 25, 2017
// https://www.hackerrank.com/challenges/mars-exploration

#include <string>
#include <iostream>

using namespace std;


int main() {
    
    int count = 0;
    
    string sos;
    cin >> sos;
    
    for (int i = 0; i < sos.length() / 3; i++) {
        
        if (sos[3 * i] != 'S') { ++count; }
            
        if (sos[(3 * i + 1)] != 'O') { ++count; }
            
        if (sos[(3 * i + 2)] != 'S') { ++count; }
        
    } // for
    
    cout << count << endl;
    
    return 0;
    
} // main()