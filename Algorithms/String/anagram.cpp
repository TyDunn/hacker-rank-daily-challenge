// Anagram
// Day #86
// Tuesday, August 8, 2017
// https://www.hackerrank.com/challenges/anagram

#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
    
        int changes = 0;

        string input;
        cin >> input;

        if (input.size() % 2) {

            changes = -1;

        } else {

            unordered_map<char, int> fr_freq;
            unordered_map<char, int> ba_freq;
            
            for (int j = 0; j < input.size() / 2; j++) {
                
                ++fr_freq[input[j]];
                ++ba_freq[input[input.size()-j-1]];
                
            } // for

             for (auto it = fr_freq.begin(); it != fr_freq.end(); ++it) {
                 
                 if (it->second > ba_freq[it->first]) {
                     
                     changes += it->second - ba_freq[it->first];
                     
                 } // if
                 
             } // for
            
        } // if / else

        cout << changes << endl;
        
    } // for i
    
    return 0;

} // main()