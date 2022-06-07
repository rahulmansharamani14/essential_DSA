#include <iostream>
using namespace std;

template <typename T>
T myfunc(T arr){
    T max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0])
    for (int i = 1; i < size; i++) {
        if(arr[i]> max){
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
	int arr1[] = {1,4,5,6,3};
	cout<<myfunc<int>(arr1);
	return 0;
}