// Forming a Magic Square
// Day #32
// Wednesday, May 31, 2017
// https://www.hackerrank.com/challenges/magic-square-forming

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    vector<vector<vector<int>>> magic_squares =
    {{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
     {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
     {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
     {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
     {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
     {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
     {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
     {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}};

    vector<vector<int>> square(3, vector<int>(3));
    
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            cin >> square[i][j];
            
        } // for
        
    } // for
    
    int min_cost = 81;
    
    for (int i = 0; i < 8; i++) {
        
        int curr_cost = 0;
        
        for (int j = 0; j < 3; j++) {
            
            for (int k = 0; k < 3; k++) {
                
                curr_cost += abs(square[j][k] - magic_squares[i][j][k]);
                
            } // for
            
        } // for
        
        if (curr_cost < min_cost) {
            
            min_cost = curr_cost;
            
        } // if
        
    } // for
    
    cout << min_cost;
    
    return 0;

}