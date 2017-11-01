// A Very Big Sum
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/a-very-big-sum


#include <iostream>
using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    long sum = 0;
    long temp;
    
    for (int i = 0; i < num; i++) {
        
        cin >> temp;
        
        sum += temp;
        
    } // for
    
    cout << sum;
    
    return 0;
}