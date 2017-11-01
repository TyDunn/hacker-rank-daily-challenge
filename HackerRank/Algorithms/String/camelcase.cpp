// CamelCase
// Day #74
// Saturday, July 22, 2017
// https://www.hackerrank.com/challenges/camelcase

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int count = 1;
    
    string camelCase;
    cin >> camelCase;
    
    for (int i = 0; i < camelCase.length(); i++) {
        
        if (camelCase[i] > 64 && camelCase[i] < 91) {
            
            ++count;
            
        } // if
        
    } // for
    
    cout << count << endl;
    
    return 0;
    
} // main()