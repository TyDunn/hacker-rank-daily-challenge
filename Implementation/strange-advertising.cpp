// Viral Advertising
// Day #40
// Thursday, June 8, 2017
// https://www.hackerrank.com/challenges/strange-advertising

#include <iostream>
using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    int people = 5;
    
    int sum = 0;
    
    for (int i = 0; i < num; i++) {
        
        people = people / 2;
        
        sum += people;
        
        people *= 3;
        
    } // for
    
    cout << sum << endl;
    
    return 0;

} // main()