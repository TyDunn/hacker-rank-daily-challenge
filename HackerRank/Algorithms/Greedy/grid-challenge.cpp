// Grid Challenge
// Day #95
// Friday, August 25, 2017
// https://www.hackerrank.com/challenges/grid-challenge

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int tests;
    cin >> tests;
    
    for (int i = 0; i < tests; i++) {
        
        bool lex = true;
        
        int size;
        cin >> size;
        
        vector<vector<char>> grid;
        
        for (int j = 0; j < size; j++) {
            
            vector<char> row(size);
            
            for (int k = 0; k < size; k++) {
                
                cin >> row[k];
                
            } // for k
            
            sort(row.begin(), row.end());
                
            grid.push_back(row);
            
        } // for j
        
        for (int col = 0; col < size; col++) {
            
            for (int row = 1; row < size; row++) {
                
                if (grid[row][col] < grid[row-1][col]) {
                    
                    lex = false;
                    break;
                    
                } // if
                
            } // for row
            
        } // for col
        
        (lex) ? (cout << "YES" << endl) : (cout << "NO" << endl);
        
    } // for i
    
    return 0;
    
} // main()