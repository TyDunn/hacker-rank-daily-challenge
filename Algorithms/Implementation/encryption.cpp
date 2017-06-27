// Encryption
// Day #58
// Tuesday, June 27, 2017
// https://www.hackerrank.com/challenges/encryption

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    string password;
    cin >> password;
    
    int col = ceil(sqrt(password.length()));
    
    for (int j = 0; j < col; j++) {
    
        for (int i = j; i < password.length(); i += col) {

            if (password[i] != '\0') {    
            
                cout << password[i];
                
            }

        } // for
        
        cout << " ";
        
    } // for
    
    return 0;

} // main()
