// Library Fine
// Day #49
// Sunday, June 18, 2017
// https://www.hackerrank.com/challenges/library-fine

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int act_day, act_mon, act_yr;
    cin >> act_day >> act_mon >> act_yr;
    
    int exp_day, exp_mon, exp_yr;
    cin >> exp_day >> exp_mon >> exp_yr;
    
    int fine;
    
    if (act_yr < exp_yr) {
        
        fine = 0;
    
    } else if (act_yr == exp_yr) {
        
        if (act_mon < exp_mon) {
            
            fine = 0;
        
        } else if (act_mon == exp_mon) { 
        
            if (act_day <= exp_day) {
                
                fine = 0;
                
            } else {
                
                fine = 15 * (act_day - exp_day);
                
            } // if / else
            
        } else { 
        
            fine = 500 * (act_mon - exp_mon);
        
        } // if / else
        
    } else {
        
        fine = 10000;
        
    } // if / else
    
    cout << fine << endl;
    
    return 0;
    
} // main()