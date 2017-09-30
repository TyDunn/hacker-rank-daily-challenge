// Sparse Arrays
// Day #126
// Saturday, September 30, 2017
// https://www.hackerrank.com/challenges/sparse-arrays

#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;


int main() {

    int col_size;
    cin >> col_size;
    
    unordered_map<string, int> collection;
    
    string temp;
    
    while(col_size--) {
        
        cin >> temp;
        
        collection[temp]++;
        
    } // while
    
    int que_size;
    cin >> que_size;
    
    while(que_size--) {
        
        cin >> temp;
        
        cout << collection[temp] << endl;
        
    } // while
    
    return 0;

} // main()