// Cut the sticks
// Day #50
// Monday, June 19, 2017
// https://www.hackerrank.com/challenges/cut-the-sticks

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<int> sticks(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> sticks[i];
        
    } // for
    
    sort(sticks.rbegin(), sticks.rend());
    
    while (!sticks.empty()) {
        
        cout << sticks.size() << endl;
        
        int min = sticks.back();
        
        do { 
            
            sticks.pop_back();
        
        } while (min == sticks.back());
        
        for (int i = 0; i < sticks.size(); i++) {
            
            sticks[i] -= min;
            
        } // for
        
    } // while
    
    return 0;

} // main()