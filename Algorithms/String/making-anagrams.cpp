// Making Anagrams
// Day #87
// Wednesday, August 9, 2017
// https://www.hackerrank.com/challenges/making-anagrams

#include <unordered_map>
#include <iostream>

using namespace std;


int main() {

    int dltns = 0;
    
    string first, second;
    
    cin >> first >> second;
    
    unordered_map<char, int> one, two;
    
    for (int i = 0; i < first.size(); i++) {
                
        ++one[first[i]];
                
    } // for i
    
    for (int j = 0; j < second.size(); j++) {
                
        ++two[second[j]];
                
    } // for j
    
    for (auto it = one.begin(); it != one.end(); ++it) {
                 
        if (it->second > two[it->first]) {
                     
            dltns += it->second - two[it->first];
            it->second = two[it->first];
            
        } else {
            
            dltns += two[it->first] - it->second;
            two[it->first] = it->second;
                   
        } // if / else
                 
    } // for
    
    for (auto it = two.begin(); it != two.end(); ++it) {
                 
        if (it->second > one[it->first]) {
                     
            dltns += it->second - one[it->first];
            it->second = one[it->first];
            
        } else {
            
            dltns += one[it->first] - it->second;
            one[it->first] = it->second;
                   
        } // if / else
                 
    } // for
    
    cout << dltns << endl;
    
    return 0;
    
} // main()