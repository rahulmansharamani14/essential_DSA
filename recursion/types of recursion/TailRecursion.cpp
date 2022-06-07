#include <iostream>
using namespace std;

void func(int n){
	if(n>0){
        func(n-1);
		cout<<"n: "<<n<<endl;
	}
}


int main()
{
	int x = 5;
	func(x);
}