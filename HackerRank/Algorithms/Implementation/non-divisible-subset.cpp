// Non-Divisible Subset
// Day #51
// Tuesday, June 20, 2017
// https://www.hackerrank.com/challenges/non-divisible-subset

#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    
    int count = 0;
    
    int num, div;
    cin >> num >> div;
    
    unordered_map<int, int> rmd;
    
    int temp;
    
    for (int i = 0; i < num; i++) {
        
        cin >> temp;
        
        temp %= div;
        
        ++rmd[temp];
        
    } // for
    
    // max one evenly divisible num
    if (rmd[0] != 0) { ++count; }
    
    // max one num with remainder of div / 2
    if (div % 2 == 0) { ++count; } 
    
    int i = 1;
    
    // larger of paired remainder sets
    while (i < div - i) {
        
        count += max(rmd[i], rmd[div - i]);
    
        ++i;
    
    } // while
    
    cout << count << endl;
    
    return 0;

} // main()