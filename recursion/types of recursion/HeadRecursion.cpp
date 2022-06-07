#include <iostream>
using namespace std;

void func(int n){
	if(n>0){
		cout<<"n: "<<n<<endl;
		func(n-1);
	}
}


int main()
{
	int x = 5;
	func(x);
}