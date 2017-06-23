// Drawing Book
// Day #28
// Saturday, May 27, 2017
// https://www.hackerrank.com/challenges/drawing-book

#include <math.h>
#include <iostream>

using namespace std;


int main() {
    
    int n, p;
    cin >> n >> p;
    cout << min(p / 2, n / 2 - p / 2);
    
    return 0;
}
