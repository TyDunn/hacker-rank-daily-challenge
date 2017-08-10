// Game of Thrones - I
// Day #88
// Thursday, August 10, 2017
// https://www.hackerrank.com/challenges/game-of-thrones

#include <unordered_map>
#include <iostream>

using namespace std;


int main() {
    
    string input;
    cin >> input;
    
    unordered_map<char, int> word;
    
    for (int i = 0; i < input.size(); i++) {
        
        ++word[input[i]];
        
    } // for i
    
    int num_odd = 0;
    
    for (auto it = word.begin(); it != word.end(); ++it) {
        
        if (it->second % 2 != 0) {
            
            ++num_odd;
            
        } // if
        
    } // for it
    
    if (input.size() % 2 != 0) {
        
        (num_odd < 2) ? (cout << "YES" << endl) : (cout << "NO" << endl);   
        
    } else {
        
        (num_odd < 1) ? (cout << "YES" << endl) : (cout << "NO" << endl); 
        
    } // if / else
    
    return 0;
    
} // main()