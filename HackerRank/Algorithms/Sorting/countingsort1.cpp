// Counting Sort 1
// Day #9
// Sunday, May 7, 2017
// https://www.hackerrank.com/challenges/countingsort1

#include <vector>
#include <iostream>

using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    int element;
    vector<int> occurences(100);
    
    for (int i = 0; i < num; i++) {
        
        cin >> element;
        
        ++occurences[element];
        
    } // for
    
    for (int i = 0; i < 100; i++) {
        
        cout << occurences[i] << " ";
        
    } // for
    
    return 0;
}