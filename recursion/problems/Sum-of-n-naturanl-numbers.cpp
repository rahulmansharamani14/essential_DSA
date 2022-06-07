#include <iostream>

using namespace std;

int recursiveSum(int n){
    // Time Complexity = O(n)
    // Space Complexity = O(n)
    if (n == 0) 
    {
        return 0;
    }else{
        return recursiveSum(n-1) + n;
    }
    
}

int iterativeSum(int n){
    // Time Complexity = O(n)
    int sum = 0, i = 1;
    while (i <= n){
        sum += i;
        i++; 
    }
    return sum;
}

int formulaeSum(int n){
        // Time Complexity = O(1)
    return n*(n+1)/2;
}

int main(){
    cout<< "Sum of N natural numbers: ";
    cout<< recursiveSum(10);
    return 0;
}