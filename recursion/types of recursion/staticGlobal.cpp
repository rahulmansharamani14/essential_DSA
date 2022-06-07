#include <iostream>
using namespace std;

int func(int n){
    static int a = 0;

    cout<<"func:"<<n;

    if(n > 0){
        a++;
        return func(n-1) + a;
    }else{
        return 0;
    }
}


int main(){
    int n = 5;
    cout<<func(n);
    
}