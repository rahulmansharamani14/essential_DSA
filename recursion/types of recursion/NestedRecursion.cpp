#include <iostream>

using namespace std;

int func(int n){
    if(n > 100){
        return n - 10;
    }else{
        return func(func(n + 11));
    }
}


int main(){
    int value =  func(99);
    cout<< value;
    return 0;
}