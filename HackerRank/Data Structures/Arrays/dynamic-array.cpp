// Dynamic Array
// Day #138
// Tuesday, October 17, 2017
// https://www.hackerrank.com/challenges/dynamic-array


#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int n, q;
    cin >> n >> q;
    
    int last_ans = 0;
    
    vector<vector<int>> seq_list(n);
    
    for (int i = 0; i < q; i++) {
        
        int t, x, y;
        cin >> t >> x >> y;
        
        int idx = (x ^ last_ans) % n;
        
        if (t == 1) {
            
            seq_list[idx].push_back(y);
            
        } else {
            
            last_ans = seq_list[idx][y%(seq_list[idx].size())];
            cout << last_ans << endl;
            
        } // if / else
        
    } // for
    
    return 0;
    
} // main()