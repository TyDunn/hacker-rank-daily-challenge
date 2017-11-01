// Cavity Map
// Day #68
// Tuesday, July 11, 2017
// https://www.hackerrank.com/challenges/cavity-map

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;
    
    vector<vector<int>> map(size, vector<int>(size));
    
    for (int i = 0; i < size; i++) {
        
        string row;
        cin >> row;
        
        for (int j = 0; j < size; j++) {
            
            map[i][j] = row[j] - 48;
            
        } // for
        
    } // for
    
    for (int i = 0; i < size; i++) {
        
        for (int j = 0; j < size; j++) {
            
            if (i > 0 && i < size - 1 &&
                j > 0 && j < size - 1 &&
                map[i][j] > map[i-1][j] &&
                map[i][j] > map[i+1][j] &&
                map[i][j] > map[i][j-1] &&
                map[i][j] > map[i][j+1]) {
                    
                    cout << 'X';
                
            } else {
                
                cout << map[i][j];
                
            } // if / else
            
        } // for
        
        cout << endl;
        
    } // for
    
    return 0;

} // main()