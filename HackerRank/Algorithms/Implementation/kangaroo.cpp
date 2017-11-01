// Kangaroo
// Day #20
// Friday, May 19, 2017
// https://www.hackerrank.com/challenges/kangaroo

#include <iostream>
using namespace std;

int main() {
    
    int x1;
    cin >> x1;
    
    int v1;
    cin >> v1;
    
    int x2;
    cin >> x2;
    
    int v2;
    cin >> v2;
    
    if (v2 >= v1) {
        
        cout << "NO";
        
    } else if ((x1 - x2) % (v2 - v1) == 0) {
        
        cout << "YES";
        
    } else {
        
        cout << "NO";
        
    } // if-else
    
    return 0;
}