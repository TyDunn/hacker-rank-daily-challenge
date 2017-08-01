// Alternating Characters
// Day #83
// Tuesday, August 1, 2017
// https://www.hackerrank.com/challenges/alternating-characters

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        int count = 0;
        
        string input;
        cin >> input;
        
        for (int j = 1; j < input.size(); j++) {
            
            if (input[j-1] == input[j]) {
                
                ++count;
                
            } // if
            
        } // for
        
        cout << count << endl;
        
    } // for
     
    return 0;
    
} // main()