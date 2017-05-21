// Breaking the Records
// Day #22
// Sunday, May 21, 2017
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records

#include <iostream>
using namespace std;

int main() {
    
    int num_games;
    cin >> num_games;
    
    int current_best;
    cin >> current_best;
    int current_worst = current_best;
    
    int score;
    int num_best_changes = 0;
    int num_worst_changes = 0;
    
    for (int i = 0; i < num_games - 1; i++) {
        
        cin >> score;
        
        if (score > current_best) {
            
            current_best = score;
            ++num_best_changes;
            
        } else if (score < current_worst) {
            
            current_worst = score;
            ++num_worst_changes;
            
        } // else-if
        
    } // for
    
    cout << num_best_changes << " " << num_worst_changes;
    
    return 0;
}
