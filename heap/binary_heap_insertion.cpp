// Time Complexity = O(size) or O(height)

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

};

int main(){
    MinHeap h(11);
    h.insert(1);
    return 0;
}