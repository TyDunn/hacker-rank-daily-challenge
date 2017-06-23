// Plus Minus
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/plus-minus

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    cout << setprecision(7);
    
    int num_total;
    cin >> num_total;
    
    int num_pos = 0;
    int num_neg = 0;
    int num_zero = 0;
    
    int input;
    
    for (int i = 0; i < num_total; i++) {
        
        cin >> input;
        
        if (input > 0) { ++num_pos; }
        else if (input < 0) { ++num_neg; }
        else { ++num_zero; }
        
    } // for
    
    cout << num_pos / (double) num_total << endl;
    cout << num_neg / (double) num_total << endl;
    cout << num_zero / (double) num_total;
    
    return 0;
}
