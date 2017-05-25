// Birthday Cake Candles
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/birthday-cake-candles

#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    int curr_tall_height = 0;
    int curr_tall_count = 0;
    
    int curr_input;
    
    for (int i = 0; i < num; i++) {
        
        cin >> curr_input;
        
        if (curr_input > curr_tall_height) {
            
            curr_tall_height = curr_input;
            curr_tall_count = 1;
            
        } else if (curr_input == curr_tall_height) {
            
            ++curr_tall_count;
            
        } // if/else-if
        
    } // for
    
    cout << curr_tall_count;
    
    return 0;
}
