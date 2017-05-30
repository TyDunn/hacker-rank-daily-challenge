// Cats and a Mouse
// Day #31
// Tuesday, May 30, 2017
// https://www.hackerrank.com/challenges/cats-and-a-mouse

#include <math.h>
#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;

    int cat_a, cat_b, mouse_c, dist_a, dist_b;
    
    for (int i = 0; i < num; i++) {
        
        cin >> cat_a >> cat_b >> mouse_c;
        
        dist_a = abs(cat_a - mouse_c);
        dist_b = abs(cat_b - mouse_c);
        
        if (dist_a == dist_b) {
            
            cout << "Mouse C" << endl;
            
        } else if (dist_a < dist_b) {
            
            cout << "Cat A" << endl;
            
        } else {
            
            cout << "Cat B" << endl;
            
        } // if / else if / else
        
    } // for
    
    return 0;
}