// Marc's Cakewalk
// Day #94
// Thursday, August 24, 2017
// https://www.hackerrank.com/challenges/marcs-cakewalk

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<int> cupcakes(num);
    
    for (int i = 0; i < num; i++) {
        
        int cupcake;
        cin >> cupcakes[i];
        
    } // for
    
    sort(cupcakes.rbegin(), cupcakes.rend());
    
    long miles = 0;
    
    for (int i = 0; i < num; i++) {
        
        miles += cupcakes[i] * pow(2, i);
        
    } // for
    
    cout << miles << endl;
    
    return 0;

} // main()