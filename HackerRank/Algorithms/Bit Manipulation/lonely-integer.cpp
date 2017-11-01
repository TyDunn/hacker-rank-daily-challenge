// Lonely Integer
// Day #103
// Wednesday, September 6, 2017
// https://www.hackerrank.com/challenges/lonely-integer

#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    int answer = 0;
    
    for (int i = 0; i < num; i++) {
        
        int temp;
        cin >> temp;
        
        answer ^= temp;
        
    } // for
    
    cout << answer << endl;
    
    return 0;
    
} // main()