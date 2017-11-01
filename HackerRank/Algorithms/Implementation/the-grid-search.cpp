// The Grid Search
// Day #70
// Friday, July 14, 2017
// https://www.hackerrank.com/challenges/the-grid-search

#include <vector>
#include <string>
#include <iostream>

using namespace std;


int main() {
    
    int num_tests;
    cin >> num_tests;
    
    for (int test = 0; test < num_tests; test++) {
    
        int lar_row, lar_col;
        cin >> lar_row >> lar_col;

        vector<string> lar_grid(lar_row);

        for (int row = 0; row < lar_row; row++) {

                cin >> lar_grid[row];

        } // for lar_row

        int sma_row, sma_col;
        cin >> sma_row >> sma_col;

        vector<string> sma_grid(sma_row);

        for (int row = 0; row < sma_row; row++) {

                cin >> sma_grid[row];

        } // for sma_row

        bool found = false;
        
        for (int i = 0; i <= lar_row - sma_row; i++) {
            
            for (int j = 0; j <= lar_col - sma_col; j++) {
                
                int l = 0, k = i;
                
                while (lar_grid[k].substr(j, sma_col) == 
                       sma_grid[l].substr(0, sma_col)) {
                   
                    if (k - i + 1 == sma_row) {
                        
                        found = true;
                        
                        break;
                        
                    } // if
                    
                    k++, l++;
                    
                } // while
                
            } // for j
            
        } // for i

        (found) ? cout << "YES" << endl : cout << "NO" << endl;
    
    } // for num_tests
                                
    return 0;
    
} // main()