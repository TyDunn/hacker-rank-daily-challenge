// Queue using Two Stacks
// Day #121
// Monday, September 25, 2017
// https://www.hackerrank.com/challenges/queue-using-two-stacks

#include <stack>
#include <iostream>

using namespace std;

int main() {
    
    stack<int> front, back;
    
    int q;
    cin >> q;
    
    while (q--) {
        
        int type, val;
        
        cin >> type;
        
        if (type == 1) {
            
            cin >> val;
            back.push(val);
            
        } else {
            
            if (front.empty()) {
                
                while (!back.empty()) {
                    
                    front.push(back.top());
                    back.pop();
                    
                } // while
                
            } // if
            
            if (!front.empty()) {
                
                if (type == 2) { front.pop(); }
                
                if (type == 3) { cout << front.top() << endl; }
            
            } // if
            
        } // if / else
        
    } // while
    
    return 0;
    
} // main()