// Jim and the Orders
// Day #101
// Monday, September 4, 2017
// https://www.hackerrank.com/challenges/jim-and-the-orders

#include <list>
#include <iostream>

using namespace std;

class Order {
    
    private:
        int orderPos, createdAt, timeReq;
    
    public:
        Order(int orderPos, int createdAt, int timeReq) {
            this->createdAt = createdAt;
            this->timeReq = timeReq;
            this->orderPos = orderPos;
        }
    
        int getCreatedAt() {
            return createdAt;
        } // getCreatedAt()
    
        int getTimeReq() {
            return timeReq;
        } // getTimeReq()
    
        int getOrderPos() {
            return orderPos;
        } // getOrderPos()
    
        int getTimeDone() {
            return createdAt + timeReq;
        } // getTimeDone()
    
}; // Order

int main() {
    
    int num;
    cin >> num;
    
    list<Order> orders;
    
    int createdAt, timeReq;
    cin >> createdAt >> timeReq;
    
    orders.push_back(Order(1, createdAt, timeReq));
    
    for (int i = 1; i < num; i++) {
        
        cin >> createdAt >> timeReq;
        
        auto itr = orders.begin(); 
        
        while (createdAt + timeReq >= 
               itr->getTimeDone() &&
               itr != orders.end()) {
            
            ++itr;
            
        } // while
        
        if (itr == orders.end()) {
            
            orders.push_back(Order(i+1, createdAt, timeReq));
            
        } else {
            
            orders.insert(itr, Order(i+1, createdAt, timeReq));
            
        } // if / else   
        
    } // for
    
    for (auto itr : orders) {
            
        cout << itr.getOrderPos() << " ";
            
    } // for  
     
    return 0;
    
} // main()