// Extra Long Factorials
// Day #46
// Wednesday, June 14, 2017
// https://www.hackerrank.com/challenges/extra-long-factorials

#include <vector>
#include <iostream>

using namespace std;

int main() {
    
    int num;
    cin >> num;

    vector<int> factorials;
    factorials.push_back(1);
    
    for (int i = 2; i <= num; i++) {
        
        for (auto itr = factorials.begin(); itr != factorials.end(); itr++) {
            
            *itr *= i;
            
        } // for
        
        for (size_t j = 0; j < factorials.size(); j++) {

            if (factorials[j] >= 10) {

                if (j == factorials.size() - 1) {
                    
                    factorials.push_back(0);

                } // if
                    
                factorials[j + 1] += factorials[j] / 10;
                factorials[j] %= 10;

            } // if

        } // for
    
    } // for

    for (auto itr = factorials.rbegin(); itr != factorials.rend(); itr++) {
        
        cout << *itr;
    
    } // for
        
    return 0;
    
} // main()
