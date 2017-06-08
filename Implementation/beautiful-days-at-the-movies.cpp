// Beautiful Days at the Movies
// Day #39
// Wednesday, June 7, 2017
// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies

#include <iostream>

using namespace std;

int reverse(int);

int main() {
    
    int start, end, divisor;
    
    cin >> start >> end >> divisor;
    
    int num_beautiful = 0;
    
    for (int date = start; date <= end; date++) {
        
        if ((date - reverse(date)) % divisor == 0) {
            
            ++num_beautiful;
            
        } // if
        
    } // for
    
    cout << num_beautiful << endl;
    
    return 0;

} // main()

int reverse(int number){
    
    int reverse = 0;
    
    while (number != 0) {
    
        reverse = 10 * reverse + number % 10;
        
        number = number / 10;
    
    } // while
    
    return reverse;

} // reverse()