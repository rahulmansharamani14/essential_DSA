#include <iostream>

using namespace std;

void insert(int arr[], int length, int index, int value) {
    for (int i = length; i > index; i--) {
        arr[i] = arr[i+1];
    }
    length++;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    return 0;
}