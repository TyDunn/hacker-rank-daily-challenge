// Angry Professor
// Day #38
// Tuesday, June 6, 2017
// https://www.hackerrank.com/challenges/angry-professor

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num_tests;
    cin >> num_tests;
    
    int total_students; // n
    int cancel_threshold; // k
    int arrival_time; // temp
    
    for (int i = 0; i < num_tests; i++) {
        
        cin >> total_students;
        
        cin >> cancel_threshold;
        
        int count = 0;
        
        for (int j = 0; j < total_students; j++) {
            
            cin >> arrival_time;
            
            if (arrival_time <= 0) {
               
                ++count;
                
            } // if
            
        } // for
        
        if (count >= cancel_threshold) {
            
            cout << "NO" << endl;
            
        } else {
            
            cout << "YES" << endl;
            
        } // if-else
        
    } // for
    
    return 0;

} // main()