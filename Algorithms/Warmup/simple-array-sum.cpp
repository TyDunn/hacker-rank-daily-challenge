// Simple Array Sum
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/simple-array-sum

#include <iostream>
using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    int sum = 0;
    int temp;
    
    for (int i = 0; i < num; i++) {
        
        cin >> temp;
        
        sum += temp;
        
    } // for
    
    cout << sum;
    
    return 0;
}
