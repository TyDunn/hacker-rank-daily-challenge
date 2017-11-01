// Minimum Distances
// Day #55
// Saturday, June 24, 2017
// https://www.hackerrank.com/challenges/minimum-distances

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<int> data(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> data[i];
        
    } // for
    
    int min = num + 1;
    
    for (int i = 0; i < num; i++) {
        
        for (int j = 0; j < num; j++) {
            
            if (data[i] == data[j] && 
                abs(j - i) < min && 
                i != j) {
                
                min = abs(j - i);
                
            } // if
            
        } // for
        
    } // for
    
    if (min == num + 1) {
        
        cout << -1 << endl;
        
    } else {
        
        cout << min << endl;
        
    } // if / else
    
    return 0;

} // main()