// Happy Ladybugs
// Day #71
// Tuesday, July 18, 2017
// https://www.hackerrank.com/challenges/happy-ladybugs

#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
    
    int num_tests;
    cin >> num_tests;
    
    for (int i = 0; i < num_tests; i++) {
        
        bool happy = true;
        
        int size;
        cin >> size;
        
        string board;
        cin >> board;
        
        unordered_map<char, int> count;
        
        for (int j = 0; j < size; j++) {
            
            ++count[board[j]];
            
        } // for
        
        if (count['_']) {
            
            for (auto itr : count) {
                
                if (itr.first != '_' &&
                    itr.second == 1) {
                    
                    happy = false;
                    
                } // if
                
            } // for
            
        } else {
                
                if (board[0] != board[1] || 
                    board[size-2] != board[size-1]) {
                    
                    happy = false;
                    
                } // if
                
                for (int k = 1; k < size - 1; k++) {
                
                    if (board[k] != board[k-1] &&
                        board[k] != board[k+1]) {

                        happy = false;

                    } // if
                
                } // for
            
        } // if / else
        
        (happy) ? cout << "YES" << endl : cout << "NO" << endl;
        
    } // for
    
    return 0;
    
} // main()