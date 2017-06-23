// Simple Array Sum
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/compare-the-triplets

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    vector<int> alice(3);
    
    for (int i = 0; i < 3; i++) {
        
        cin >> alice[i];
        
    } // for
    
    vector<int> bob(3);
    
    for (int i = 0; i < 3; i++) {
        
        cin >> bob[i];
        
    } // for
    
    int alice_score = 0;
    int bob_score = 0;
    
    for (int i = 0; i < 3; i++) {
        
        if (alice[i] > bob[i]) {
            
            ++alice_score;
        
        } else if (bob[i] > alice[i]) {
            
            ++bob_score;
            
        } // if/else-if
        
    } // for
    
    cout << alice_score << " " << bob_score;
    
    return 0;
}