// Time Conversion
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/time-conversion

#include <string>
#include <iostream>

using namespace std;


int main() {
    
    string time;
    cin >> time;
    
    if (time.substr(8,2) == "AM") {
        
        if (time.substr(0,2) == "12") {
            
            cout << "00" << time.substr(2,6);
            
        } else { 
            
            cout << time.substr(0,8);
        
        }
        
    } else {
        
        if (time.substr(0,2) == "12") {
            
            cout << time.substr(0,8);
            
        } else {
        
            int hour = stoi(time.substr(0,2)) + 12;
        
            cout << hour << time.substr(2,6);
            
        }
    }
    
    return 0;
}
