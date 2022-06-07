#include <iostream>

using namespace std;

int recursive_factorial(int n){
    // Time Complexity = O(n)
    // Space Complexity = O(n)
    if(n==0) return 1;

    return recursive_factorial(n-1)*n;
}

int iterative_factorial(int n){

    int i = 1, fact = 1;

    while(i <= n){
        fact*= i;
        i++;
    }
    return fact;
}


int main(){
    cout << "Factorial of number: ";
    cout << recursive_factorial(5);
    return 0;
}