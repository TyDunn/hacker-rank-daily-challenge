// ACM ICPC Team
// Day #56
// Sunday, June 25, 2017
// https://www.hackerrank.com/challenges/acm-icpc-team

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int max_topics = 0;
    int num_teams = 0;
    
    int num_people, num_topics;
    cin >> num_people >> num_topics;
    
    vector<string> people(num_people);
    
    for (int i = 0; i < num_people; i++) {
        
        cin >> people[i];
        
    } // for
    
    int temp = 0;
    
    for (int j = 0; j < num_people; j++) {
        
        for (int k = num_people - 1; k > temp; k--) {
            
            int topics = 0;
            
            for (int l = 0; l < num_topics; l++) {
                
                if (j != k && (people[j][l] == '1' || 
                    people[k][l] == '1')) {
                    
                    ++topics;
                    
                } // if
                
            } // for
            
            if (topics > max_topics) {
                
                max_topics = topics;
                num_teams = 1;
                
            } else if (topics == max_topics) {
                
                ++num_teams;
                
            } // if / else if
            
        } // for
        
        ++temp;
        
    } // for
    
    cout << max_topics << endl;
    cout << num_teams << endl;
    
    return 0;
    
} // main()
