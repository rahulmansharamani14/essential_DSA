#include <iostream>

using namespace std;

int power(int m,int n){
    // Time Complexity = O(n)
    // Space Complexity = O(n)
    if(n == 0) return 1;

    return power(m, n - 1)*m;
}

int effcient_power(int m,int n){
    
    if(n == 0) return 1;

    if(n%2 == 0){
        return effcient_power(m*m,n/2);
    }else{
        return effcient_power(m*m,(n-1)/2)*m;
    } 

   
}


int main(){
    cout << "Power of a number:";
    cout<< effcient_power(2,5);
    return 0;
}