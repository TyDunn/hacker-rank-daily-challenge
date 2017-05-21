// Between Two Sets
// Day #21
// Saturday, May 20, 2017
// https://www.hackerrank.com/challenges/between-two-sets

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int lcm(vector<int>);
int lcm_helper(int, int);

int gcd(vector<int>);
int gcd_helper(int, int);

int main() {
    
    int num_a; // # of elements
    cin >> num_a; // in set A
    
    int num_b; // # of elements
    cin >> num_b; // in set A
    
    vector<int> set_a(num_a); // set A
    
    for (int i = 0; i < num_a; i++) {
        
        cin >> set_a[i];
        
    } // for set A
    
    vector<int> set_b(num_b); // set B
    
    for (int i = 0; i < num_b; i++) {
        
        cin >> set_b[i];
        
    } // for set B
    
    int lcm_a = lcm(set_a);
    
    int gcd_b = gcd(set_b);
    
    int count = 0;
    
    for (int i = lcm_a; i <= gcd_b; i += lcm_a) {
        
        if (gcd_b % i == 0) { count++; }
        
    } // for number of multiples of LCM that evenly divide the GCD
    
    cout << count;
    
    return 0;
}

int lcm(vector<int> set) {
    
    int result = set[0];
    
    for (int i = 1; i < set.size(); i++) {
        
        result = lcm_helper(result, set[i]);
        
    } // for
    
    return result;
    
} // lcm()

int lcm_helper(int x, int y) {
    
    return x * (y / gcd_helper(x, y));
    
} // lcm_helper()

int gcd(vector<int> set) {
    
    int result = set[0];
    
    for (int i = 1; i < set.size(); i++) {
        
        result = gcd_helper(result, set[i]);
        
    } // for
    
    return result;
    
} // gcd()

int gcd_helper(int x, int y) {
    
    while (y > 0) {
        
        int temp = y;
        
        y = x % y;
        
        x = temp;
        
    } // while
    
    return x;
    
} // gcd_helper()