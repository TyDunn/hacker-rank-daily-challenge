// Maximum Perimeter Triangle
// Day #97
// Wednesday, August 30, 2017
// https://www.hackerrank.com/challenges/maximum-perimeter-triangle

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<int> stx(num);
    
    for (int i = 0; i < num; i++) { cin >> stx[i]; }
    
    sort(stx.begin(), stx.end());
    
    int idx = num - 3;
    
    while (idx >= 0 && stx[idx] + stx[idx+1] <= stx[idx+2]) { --idx; }
    
    (idx >= 0) ? (cout << stx[idx] << " " 
                       << stx[idx+1] << " " 
                       << stx[idx+2] << endl) 
               : (cout << -1 << endl);

    return 0;
    
} // main()