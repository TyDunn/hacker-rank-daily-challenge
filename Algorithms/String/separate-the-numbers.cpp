#include <string>
#include <iostream>

using namespace std;
// Separate the Numbers
// Day #80
// Saturday, July 22, 2017
// https://www.hackerrank.com/challenges/separate-the-numbers


int main() {
    
    int num;
    cin >> num;
    
    string og, nkotb, sub;
    
    for (int i = 0; i < num; i++) {
        
        cin >> og;
        
        for (int j = 1; (j <= og.size() / 2) && og != nkotb; j++) {
            
            sub = nkotb = og.substr(0, j);
            
            for (int k = 1; nkotb.size() < og.size(); k++) {
                
                nkotb += to_string(stoll(sub) + k);
                
            } // for k
            
        } // for j
        
        if (og == nkotb) {
            
            cout << "YES " << sub << endl;
            
        } else {
            
            cout << "NO" << endl;
            
        } // if / else
        
    } // for i
    
    return 0;

} // main()