// Grading Students
// Day #18
// Wednesday, May 17, 2017
// https://www.hackerrank.com/challenges/grading

#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int nearest_5x(int);

int main() {
    
    int size;
    cin >> size;
    
    vector<int> grades(size);
    
    for (int i = 0; i < size; i++) {
        
        cin >> grades[i];
        
        if (grades[i] >= 38) {
            
            int diff = nearest_5x(grades[i]) - grades[i];
            
            if (diff < 3) {
                
                grades[i] += diff;
                
            } // if
            
        } // if
        
        cout << grades[i] << endl;
        
    } // for
    
    return 0;

} // main()

int nearest_5x(int number) {

    return ceil(number / (double) 5) * 5;

} // nearest_5x()