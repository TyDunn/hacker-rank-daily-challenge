// Bon Appétit
// Day #26
// Thursday, May 25, 2017
// https://www.hackerrank.com/challenges/bon-appetit

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    int k;
    cin >> k;
    
    int anna_portion = 0;
    int temp_input;
    
    for (int i = 0; i < n; i++) {
        
        cin >> temp_input;
        
        if (i != k) {
            
            anna_portion += temp_input;
            
        } // if
        
    }
    
    int amount_charged;
    cin >> amount_charged;
    
    if (anna_portion / 2 == amount_charged) {
        
        cout << "Bon Appetit" << endl;
        
    } else {
        
        cout << amount_charged - (anna_portion / 2) << endl;
        
    } // if-else
    
    return 0;
}
