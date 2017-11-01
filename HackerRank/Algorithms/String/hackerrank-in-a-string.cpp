// HackerRank in a String!
// Day #77
// Wednesday, July 26, 2017
// https://www.hackerrank.com/challenges/hackerrank-in-a-string

#include <string>
#include <iostream>
using namespace std;


int main() {
    
    string hr = "hackerrank";
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        int k = 0;
        
        string seq;
        cin >> seq;
        
        for (int j = 0; j < seq.length(); j++) {
            
                if (hr[k] == seq[j]) { k++; }
            
        } // for
        
        if (k == 10) {
            
            cout << "YES" << endl;
            
        } else {
            
            cout << "NO" << endl;
            
        } // if / else
        
    } // for
    
    return 0;
    
} // main()