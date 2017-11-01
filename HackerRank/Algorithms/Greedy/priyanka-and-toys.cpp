// Priyanka and Toys
// Day #99
// Saturday, September 2, 2017
// https://www.hackerrank.com/challenges/priyanka-and-toys

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<int> toys(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> toys[i];
        
    } // for i
    
    sort(toys.begin(), toys.end());
    
    int current = toys[0];
    int units = 1;
    
    for (auto itr : toys) {
        
        if (itr - current > 4) {
            
            ++units;
            current = itr;
            
        } // if
        
    } // for itr
    
    cout << units << endl;
    
    return 0;
    
} // main()