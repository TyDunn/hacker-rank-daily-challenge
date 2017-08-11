// Two Strings
// Day #89
// Friday, August 11, 2017
// https://www.hackerrank.com/challenges/two-strings

#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        bool sub = false;
        
        string first, second;
        cin >> first >> second;
        
        unordered_map<char, int> freq;
        
        for (int j = 0; j < first.size(); j++) {
            
            ++freq[first[j]];
            
        } // for
        
        for (int k = 0; k < second.size(); k++) {
            
            if (freq[second[k]] > 0) {
                
                sub = true;
                
            } // if
            
        } // for
        
        (sub) ? (cout << "YES" << endl) : (cout << "NO" << endl);
        
    } // for i
    
    return 0;
    
} // main()