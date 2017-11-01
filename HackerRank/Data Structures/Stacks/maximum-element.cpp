// Maximum Element
// Day #108
// Monday, September 11, 2017
// https://www.hackerrank.com/challenges/maximum-element

#include <iostream>
#include <stack>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    stack<int> stk;
    int command = 0;
    
    for (int i = 0; i < num; i++) {
        
        cin >> command;
        
        switch(command) {
        
            case 1:
                
                int ele;
                cin >> ele;
                
                if (stk.empty()) { 
                    
                    stk.push(ele); 
                
                } else {
                
                    stk.push(max(ele, stk.top()));
                
                } // if / else
                
                break;
        
            case 2:
                
                if (!stk.empty()) { 
                
                    stk.pop(); 
                
                } // if
                
                break;
        
            case 3:
                
                cout << stk.top() << endl;
                
                break;
                
        } // switch
        
    } // for
    
    return 0;
    
} // main()