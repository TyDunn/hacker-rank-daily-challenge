// Sock Merchant
// Day #27
// Friday, May 26, 2017
// https://www.hackerrank.com/challenges/sock-merchant

#include <map>
#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    map<int,int> socks;
    
    int sock;
    int pairs = 0;
    
    for (int i = 0; i < num; i++) {
        
        cin >> sock;
        
        socks[sock]++;
        
        if (socks[sock] % 2 == 0) {
            
            ++pairs;
            
        } // if
        
    } // for
    
    cout << pairs;
    
    return 0;
}