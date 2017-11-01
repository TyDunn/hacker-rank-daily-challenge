// Lisa's Workbook
// Day #65
// Saturday, July 8, 2017
// https://www.hackerrank.com/challenges/lisa-workbook

#include <iostream>

using namespace std;

int main() {
    
    int num_special = 0;
    
    int num_chaps, probs_per_page;
    
    cin >> num_chaps >> probs_per_page;
    
    int current_page = 1;
    
    for (int chp = 1; chp <= num_chaps; chp++) {
        
        int num_probs;
        cin >> num_probs;
        
        for (int prb = 1; prb <= num_probs; prb++) {
            
            if (current_page == prb) { ++num_special; }
            
            if (prb % probs_per_page == 0) { ++current_page; }
            
        } // for prb
        
        if (num_probs % probs_per_page != 0) { ++current_page; }
        
    } // for chp
    
    cout << num_special << endl;
    
    return 0;

} // main()