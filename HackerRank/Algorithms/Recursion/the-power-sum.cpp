// The Power Sum
// Day #127
// Sunday, October 1, 2017
// https://www.hackerrank.com/challenges/the-power-sum


#include <cmath>
#include <iostream>

using namespace std;

int powerSum(int, int, int);

int main() {
    
    int total, power;
    cin >> total >> power;
    
    cout << powerSum(total, power, 1) << endl;
    
    return 0;
    
} // main()

int powerSum(int total, int power, int num) {
    
    int value = (int) (total - pow(num, power));
    
    if (value < 0) { 
        
        return 0; 
    
    } else if (value == 0) {
        
        return 1;
        
    } else {
        
        return powerSum(value, power, num + 1) +
               powerSum(total, power, num + 1);
        
    } // if / else if / else
    
} // powerSum()