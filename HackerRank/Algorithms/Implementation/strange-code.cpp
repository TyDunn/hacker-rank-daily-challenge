// Strange Counter
// Day #72
// Wednesday, July 19, 2017
// https://www.hackerrank.com/challenges/strange-code

#include <iostream>

using namespace std;


int main() {
    
    long time;
    cin >> time;
    
    long start = 3;
    
    while (time > start) {
        
        time -= start;
        
        start *= 2;
        
    } // while
    
    cout << start - time + 1 << endl;
    
    return 0;
    
} // main()