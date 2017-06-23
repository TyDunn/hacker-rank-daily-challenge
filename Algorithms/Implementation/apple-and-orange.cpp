// Apple and Orange
// Day #19
// Thursday, May 18, 2017
// https://www.hackerrank.com/challenges/apple-and-orange

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int s; // house start point
    cin >> s;
    
    int t; // house end point
    cin >> t;
    
    int a; // apple tree
    cin >> a;
    
    int b; // orange tree
    cin >> b;
    
    int m; // # of apples
    cin >> m;
    
    int n; // # of oranges
    cin >> n;
    
    int loc; // location of each fruit
    
    int apple_count = 0;
    
    for (int i = 0; i < m; i++) {
        
        cin >> loc;
        
        loc += a;
        
        if (loc >= s && loc <= t) {
            
            ++apple_count;
            
        } // if
        
    } // for
    
    cout << apple_count << endl;
    
    int orange_count = 0;
    
    for (int i = 0; i < n; i++) {
        
        cin >> loc;
        
        loc += b;
        
        if (loc >= s && loc <= t) {
            
            ++orange_count;
            
        } // if
        
    } // for
    
    cout << orange_count << endl;
    
    return 0;

} // main()