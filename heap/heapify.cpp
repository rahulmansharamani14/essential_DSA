/*
minHeapify(i) -
Time Complexity of  = O(size) or O(height) or O(logN)
Auxiliary Space = O(height) due to h + 1 recursive function call stack

extractMin() - 
Same as minHeapify + some constant time 0(1)
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MinHeap{
    int *arr; 
    int size,capacity;
    public:

    MinHeap(int c){
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left_child(int i){
        return 2*i + 1;
    }

    int right_child(int i){
        return 2*i + 2;
    }

    int parent(int i){
        return (i-1)/2;
    }

    void insert(int x){
        if(size == capacity) return;

        arr[size - 1] = x;

        int i = size - 1;

        while(i >= 0 && arr[i] > arr[parent(i)]){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i){
        int lf = left_child(i);
        int rf = right_child(i);
        int smallest = i;

        if(lf < size &&  arr[lf] < arr[smallest]) smallest = arr[lf];

        if(rf < size && arr[rf] < arr[smallest]) smallest = arr[rf];
            
        if(smallest != i){
            swap(arr[i],arr[smallest]);
            minHeapify(smallest);
        }
    }

    int extractMin(){
        if(size == 0) return INT_MAX;

        if(size == 1) return arr[0];

        
        swap(arr[0],arr[size - 1]);
        size--;
        minHeapify(0);

        return arr[size];
    }

};

int main(){
    MinHeap h(11);
    h.insert(1);
    return 0;
}