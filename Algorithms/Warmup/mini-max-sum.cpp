// Mini-Max Sum
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/mini-max-sum

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<long long> numbers(5);
    long long sum = 0;
    
    for (int i = 0; i < 5; i++) {
        
        cin >> numbers[i];
        sum += numbers[i];
        
    } // for
    
    long long min = sum - numbers[0];
    long long max = sum - numbers[0];
    
    for (int i = 1; i < 5; i++) {
        
        if (sum - numbers[i] > max) {
            
            max = sum - numbers[i] ;
            
        }
        
        if (sum - numbers[i] < min) {
            
            min = sum - numbers[i] ;
            
        }
        
    } // for
    
    cout << min << " " << max;
    
    return 0;
}
