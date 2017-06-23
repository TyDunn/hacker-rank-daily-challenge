// Append and Delete
// Day #47
// Thursday, June 15, 2017
// https://www.hackerrank.com/challenges/append-and-delete

#include <cmath>
#include <string>
#include <iostream>

using namespace std;


int main() {
    
    string end; // end word
    cin >> end;
    
    string start; // start word
    cin >> start;
    
    int num; // number of moves
    cin >> num;
    
    int length = 0; // number of shared chars
    int smaller = min(start.length(), end.length());
    
    for (int i = 0; i < smaller; i++) {
        
        if (start[i] == end[i]) {
            
            ++length;
            
        } else {
            
            break;
        
        } // if / else
        
    } // for
    
    if ((start.length() + end.length() - (2 * length)) > num) {
        
        cout << "No" << endl;
        
    } else if ((start.length() + end.length() - (2 * length)) % 2 == num % 2) {
        
        cout << "Yes" << endl;
        
    } else if (static_cast<int>(start.length()) + static_cast<int>(end.length()) - num < 0) {
        
        cout << "Yes" << endl;
        
    } else {
        
        cout << "No" << endl;
        
    } // if / else if / else if / else
    
    return 0;

} // main()