// QHEAP1
// Day #110
// Wednesday, September 13, 2017
// https://www.hackerrank.com/challenges/qheap1

#include <iostream>
#include <algorithm>

using namespace std;

#define NN 100000 // Heap size

class minHeap {
    
    private:
    
        int size;
        int heapArr[NN+1];
    
    public:
    
        minHeap() { size = 0; }
    
        void min_heapify(int);
    
        void insert(int);
    
        int search(int);
    
        void deleteKey(int);
    
        int getMin();
    
        void printHeap();
    
}; // minHeap

void minHeap::min_heapify(int idx) {
        
        int left = 2 * idx;
        int right = 2 * idx + 1;
        int min = idx;
        
        if (left < size && heapArr[left] < heapArr[min]) {
            
            min = left;
            
        } // if
                    
        if (right < size && heapArr[right] < heapArr[min]) {
            
            min = right;
            
        } // if
        
        if (min != idx) {
        
            swap(heapArr[idx],heapArr[min]);
            min_heapify(min);
        
        } // if
    
} // min_heapify()

void minHeap::insert(int key){
    
    if (size == NN) { return; }
    
    size++;

    heapArr[size] = key;

    int pos = size;

    while(pos > 1) {

        int prev = pos / 2;

        if (heapArr[prev] > heapArr[pos]){

            swap(heapArr[prev], heapArr[pos]);
            pos = prev;

        } else {

            break;

        } // if / else

    } // while

} // insert()

int minHeap::getMin() {

    if (size == 0) { return -1; }
    else { return heapArr[1]; }

} // getMin()

int minHeap::search(int ele) {
    
    for(int i = 1; i <= size; i++){
    
        if(heapArr[i] == ele) {
            
            return i;
            
        } // if
        
    } // for
        
    return -1;

} // search()

void minHeap::deleteKey(int ele) {
        
    int index = search(ele);

    heapArr[index] = heapArr[size];

    size--;
        
    min_heapify(index);
    
} // minHeap()

void minHeap::printHeap() {
    
    cout << "START" << endl;
    
    for(int i = 1; i <= size; i++){
    
        cout << heapArr[i] << endl;
        
    } // for
    
    cout << "END" << endl;
    
} // for

int main() {
    
    minHeap heap;
    
    int qry, op, val;
    cin >> qry;
    
    for (int i = 0; i < qry; i++) {
        
        cin >> op;
        
        switch(op) {
        
            case 1:
                cin >> val;
                heap.insert(val);
                break;

            case 2:
                cin >> val;
                heap.deleteKey(val);
                break;

            case 3:
                cout << heap.getMin() << endl;
                break;
                
        } // switch
        
    } // for
    
    return 0;
    
} // main()