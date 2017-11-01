// String Construction
// Day #90
// Monday, August 14, 2017
// https://www.hackerrank.com/challenges/string-construction

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        int count = 0;
        
        string input;
        cin >> input;
        
        vector<bool> letters(26);
        
        for (int j = 0; j < input.size(); j++) {
            
            if (!letters[input[j] - 'a']) { ++count; }
            letters[input[j] - 'a'] = true;
            
        } // for j
        
        cout << count << endl;
        
    } // for i
    
    return 0;
    
} // main()