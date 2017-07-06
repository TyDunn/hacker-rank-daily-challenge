// Chocolate Feast
// Day #63
// Thursday, July 6, 2017
// https://www.hackerrank.com/challenges/chocolate-feast

#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        int org = 0, exa = 0, wra = 0;
        
        int dollars, cost, trade;
        cin >> dollars >> cost >> trade;
        
        org = dollars / cost;
        
        wra = org;
        
        while (wra >= trade) {
            
            wra -= trade;
            ++wra;
            ++exa;
   
        } // while
        
        cout << org + exa << endl;
        
    } // for
    
    return 0;
    
} // main()