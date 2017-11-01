// Luck Balance
// Day #96
// Tuesday, August 29, 2017
// https://www.hackerrank.com/challenges/luck-balance

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int total_luck = 0;
    
    int total, max;
    cin >> total >> max;
    
    vector<int> important;
    
    for (int i = 0; i < total; i++) {
        
        int value, type;
        cin >> value >> type;
        
        if (type == 1) {
            
            important.push_back(value);
            
        } else {
            
            total_luck += value;
            
        } // for
        
    } // for
    
    sort(important.rbegin(), important.rend());
    
    for (int j = 0; j < important.size(); j++) {
        
        if (max > 0) {
            
            --max;
            total_luck += important[j];
            
        } else {
            
            total_luck -= important[j];
            
        } // if / else
        
    } // for
    
    cout << total_luck << endl;
    
    return 0;
    
} // main()