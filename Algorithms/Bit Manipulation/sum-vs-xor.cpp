// Sum vs XOR
// Day #105
// Friday, September 8, 2017
// https://www.hackerrank.com/challenges/sum-vs-xor

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    long start;
    cin >> start;
    
    long sum = 0;

    while(start){

        sum += start % 2 ? 0 : 1;
        start /= 2; 

    } // while
    
    sum = pow(2,sum);
    
    cout << sum << endl;
    
    return 0;
    
} // main()