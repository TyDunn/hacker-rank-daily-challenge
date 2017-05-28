#include <string>
#include <iostream>

using namespace std;


// Counting Valleys
// Day #29
// Sunday, May 28, 2017
// https://www.hackerrank.com/challenges/counting-valleys

int main() {
    
    int num;
    cin >> num;
    
    string terrain;
    cin >> terrain;
    
    int elevation = 0;
    int valleys = 0;
    bool below_sea = false;
    
    for (int i = 0; i < num; i++) {
        
        char current = terrain[i];
        
        if (current == 'U') {
            
            ++elevation;
            
        } else {
            
            --elevation;
            
        } // if-else
        
        if(!below_sea && elevation < 0) {
            
            ++valleys;
            below_sea = true;
            
        } // if
        
        if (elevation >= 0) {
            
            below_sea = false;
            
        } // if
        
    } // for
    
    cout << valleys;
    
    return 0;

}