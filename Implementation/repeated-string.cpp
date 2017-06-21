// Repeated String
// Day #52
// Wednesday, June 21, 2017
// https://www.hackerrank.com/challenges/repeated-string

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    long count = 0;
    
    string repeated;
    cin >> repeated;
    
    long anum = 0;
    
    for (long i = 0; i < repeated.length(); i++) {
        
        if (repeated[i] == 'a') {
            
            ++anum;
            
        } // if
        
    } // for
    
    long letters;
    cin >> letters;
    
    count = (letters / repeated.length()) * anum;
    
    for (long j = 0; j < letters % repeated.length(); j++) {
        
        if (repeated[j] == 'a') {
            
            ++count;
            
        } // if
        
    } // for
    
    cout << count << endl;
    
    return 0;

} // main()