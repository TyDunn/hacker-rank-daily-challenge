// Electronics Shop
// Day #30
// Monday, May 29, 2017
// https://www.hackerrank.com/challenges/electronics-shop

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int budget, num_keyboards, num_usbs;
    cin >> budget >> num_keyboards >> num_usbs;
    
    vector<int> keyboards(num_keyboards);
    
    for (int i = 0; i < num_keyboards; i++) {
        
        cin >> keyboards[i];
        
    } // for
    
    vector<int> usbs(num_usbs);
    
    for (int i = 0; i < num_usbs; i++) {
        
        cin >> usbs[i];
        
    } // for
    
    int closest = 0;
    
    for (int i = 0; i < num_keyboards; i++) {
        
        for (int j = 0; j < num_usbs; j++) {
        
            if (keyboards[i] + usbs[j] <= budget &&
                keyboards[i] + usbs[j] > closest) {
                
                closest = keyboards[i] + usbs[j];
                
            } // if
        
        } // for
        
    } // for
    
    if (closest == 0) {
        
        cout << -1;
        
    } else {
        
        cout << closest;
        
    }
    
    return 0;
    
}