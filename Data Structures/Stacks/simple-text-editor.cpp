// Simple Text Editor
// Day #128
// Tuesday, October 3, 2017
// https://www.hackerrank.com/challenges/simple-text-editor

#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main() {
    
    struct Operations {
      
        int op;
        string change;
        
    };
    
    int num_qur;
    cin >> num_qur;

    string text;
    int option;
    stack<Operations> history;

    for (int i = 0; i < num_qur; i++) {
        
        cin >> option;
        
        switch(option) {
        
            case 1:
                
                {
        
                string extra;
                cin >> extra;
        
                Operations append_op;
                append_op.op = 1;
                append_op.change = extra;
        
                history.push(append_op);
        
                text += extra;
        
                break;
                    
                }
        
            case 2:
        
                {
                
                int remove;
                cin >> remove;
        
                Operations delete_op;
                delete_op.op = 2;
                delete_op.change = text.substr(text.size() - remove, remove);
        
                history.push(delete_op);
                    
                text.erase(text.size() - remove, remove);
        
                break;
                    
                }
                    
            case 3:
        
                {
                
                int pos;
                cin >> pos;
        
                cout << text[pos - 1] << endl;
        
                break;
                    
                }
        
            case 4:      
        
                {
                
                Operations last_op;
                
                if (!history.empty()) { 
                    
                    last_op = history.top();
                    history.pop(); 
                
                }
        
                if (last_op.op == 1) {
                    
                    int size = last_op.change.size();
                    
                    text.erase(text.size() - size, size);
                    
                } else {
                    
                    text += last_op.change;
                    
                } // if / else
        
                break;
                    
                }
        
        } // switch
                
    } // for
    
    return 0;
    
} // main()