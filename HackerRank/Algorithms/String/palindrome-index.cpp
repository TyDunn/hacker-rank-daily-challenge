// Palindrome Index
// Day #132
// Sunday, October 8, 2017
// https://www.hackerrank.com/challenges/palindrome-index

#include <bits/stdc++.h>
#include <string>

using namespace std;

int palindromeIndex(string s) {
    
    int len = s.length();
    int idx = -1;
    
    for (int i = 0; i < len; i++) {
        
        if (s[i] != s[len-i-1]) { idx = i; }
        
    } // for
    
    if (idx == -1) { return -1; }
    
    string temp = s;
    temp.erase(idx,1);
    string temp_rev = temp;
    reverse(temp_rev.begin(), temp_rev.end());
    
    if (temp == temp_rev) { return idx; }
    
    return len-idx-1;
    
} // palindromeIndex()

int main() {
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++){
        
        string s;
        cin >> s;
        
        int result = palindromeIndex(s);
        
        cout << result << endl;
    
    } // for
    
    return 0;
    
} // main()