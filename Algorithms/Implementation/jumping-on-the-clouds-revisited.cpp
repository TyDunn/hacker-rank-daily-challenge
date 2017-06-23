// Jumping on the Clouds: Revisited
// Day #44
// Monday, June 12, 2017
// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int energy = 100;
    
    int num;
    cin >> num;
    
    int distance;
    cin >> distance;
    
    vector<int> clouds(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> clouds[i];
        
    } // for
    
    for (int j = 0; j < num; j += distance) {
        
        if (clouds[j] == 1) {
            
            energy -= 3;
            
        } else {
            
            energy -= 1;
            
        } // if / else
        
    } // for
    
    cout << energy << endl;
    
    return 0;
    
} // main()