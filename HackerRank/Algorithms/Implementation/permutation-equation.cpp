// Sequence Equation
// Day #43
// Sunday, June 11, 2017
// https://www.hackerrank.com/challenges/permutation-equation

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<int> p(num + 1);
    
    for(int i=1; i <= num;i++) {
        
        int k;
        cin >> k;
        
        p[k] = i;
    
    } // for
    
    for (int i = 1; i <= num; i++) {
    
        cout << p[p[i]] << endl;
    
    } // for
    
    return 0;
    
} // main()