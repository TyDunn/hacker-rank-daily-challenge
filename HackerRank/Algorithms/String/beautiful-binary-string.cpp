// Beautiful Binary String
// Day #84
// Wednesday, August 2, 2017
// https://www.hackerrank.com/challenges/beautiful-binary-string

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int count = 0;
    
    int num;
    string input;
    
    cin >> num >> input;
    
    for (int i = 2; i < num; i++) {
        
        if (input[i] == '0' && 
            input[i-1] == '1' && 
            input[i-2] == '0') {
        
            ++count; 
            i += 2;
        
        } // if
        
    } // for
    
    cout << count << endl;
    
    return 0;
    
} // main()