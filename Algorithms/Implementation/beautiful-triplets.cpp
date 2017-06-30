// Beautiful Triplets 
// Day #61
// Friday, June 30, 2017
// https://www.hackerrank.com/challenges/beautiful-triplets

include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	    
    int num, diff;
    cin >> num >> diff;

    vector<int> seq(num);
		        
    for (int i = 0; i < num; i++) {
				        
        cin >> seq[i];
					        
    } // for
			    
    int count = 0;
			        
    for (auto itr : seq) {
					        
        if (binary_search(seq.begin(), seq.end(), itr + diff) &&
		    binary_search(seq.begin(), seq.end(), itr + 2 * diff)) {

            ++count;
	
        } // if

    } // for
				    
    cout << count << endl;
				        
	return 0;

} // main()
