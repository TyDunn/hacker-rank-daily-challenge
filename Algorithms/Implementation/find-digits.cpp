// Find Digits
// Day #45
// Tuesday, June 13, 2017
// https://www.hackerrank.com/challenges/find-digits


#include <iostream>

using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        int n;
        cin >> n;
        
        int count = 0;
        
        int r = n;
        
        while (r > 0) {
            
            if (r % 10 != 0 && n % (r % 10) == 0) {
                
                ++count;
                
            } // if
            
            r /= 10;
            
        } // while
        
        cout << count << endl;
        
    } // for
    
    return 0;

} // main()