// Equalize the Array
// Day #54
// Friday, June 23, 2017
// https://www.hackerrank.com/challenges/equality-in-a-array

#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    unordered_map<int, int> count;
    
    int max_count = 0;
    
    for (int i = 0; i < num; i++) {

        int temp;
        cin >> temp;
        
        ++count[temp];
        
        if (count[temp] > max_count) {
            
            max_count = count[temp];
            
        } // if
        
    } // for
    
    cout << num - max_count << endl;
    
    return 0;
    
} // main()