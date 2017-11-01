// The Love-Letter Mystery
// Day #85
// Thursday, August 3, 2017
// https://www.hackerrank.com/challenges/the-love-letter-mystery

#include <cmath>
#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    while (num--) {
        
        int count = 0;
        
        string input;
        cin >> input;
        
        for (int i = 0; i < input.size() / 2; i++) {
            
            count += abs(input[input.size() - 1 - i] - input[i]);
            
        } // for
        
        cout << count << endl;
        
    } // while
    
    return 0;
    
} // main()