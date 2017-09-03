// Mark and Toys
// Day #100
// Sunday, September 3, 2017
// https://www.hackerrank.com/challenges/mark-and-toys

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    long bgt;
    cin >> num >> bgt;
    
    vector<long> toys(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> toys[i];
        
    } // for
    
    sort(toys.begin(), toys.end());
    
    int count = 0, idx = 0, curr = 0;
    
    while (curr <= bgt) {
        
        ++idx;
        ++count;
        curr += toys[idx];
        
    } // while
    
    cout << count << endl;
    
    return 0;
    
} // main()