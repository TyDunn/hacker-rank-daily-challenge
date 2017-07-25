// Caesar Cipher
// Day #75
// Monday, July 24, 2017
// https://www.hackerrank.com/challenges/caesar-cipher-1

#include <string>
#include <iostream>

using namespace std;


int main() {
    
    int length;
    string cipher;
    int rotate;
    
    cin >> length >> cipher >> rotate;
    
    for (auto &letter : cipher) {
        
        if (isalpha(letter)) {
            
            char figure = isupper(letter) ? 'A' : 'a';
            letter = figure + (letter - figure + rotate) % 26;
            
        } // if
        
    } // for
    
    cout << cipher << endl;
    
    return 0;

} // main()