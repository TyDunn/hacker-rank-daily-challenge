// Balanced Brackets
// Day #139
// Tuesday, October 18, 2017
// https://www.hackerrank.com/challenges/balanced-brackets


#include <string
#include <iostream>
#include <stack>

using namespace std;

string isBalanced(string s) {
    
    stack<char> brackets;
    
    for (int i = 0; i < s.size(); i++) {
        
        switch(s[i]) {
                
            case '(':
            case '{':
            case '[':
                
                brackets.push(s[i]);
                break;
            
            case ')':
                
                if (brackets.empty() || brackets.top() != '(') {
                    
                    return "NO";
                    
                } // if
                
                brackets.pop();
                break;
                
            case '}':
                
                if (brackets.empty() || brackets.top() != '{') {
                    
                    return "NO";
                    
                } // if
                
                brackets.pop();
                break;
                
            case ']':
                
                if (brackets.empty() || brackets.top() != '[') {
                    
                    return "NO";
                    
                } // if
                
                brackets.pop();
                break;
                
        } // switch
        
    } // for
    
    return brackets.empty() ? "YES" : "NO";

} // isBalanced()

int main() {
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        
        string s;
        cin >> s;
        
        string result = isBalanced(s);
        cout << result << endl;
    
    } // for
    
    return 0;

} // main()