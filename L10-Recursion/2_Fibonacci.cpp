#include <iostream>
using namespace std;

int fibo(int n){
	if(n == 0 or n == 1){
		return n; // if n->0 hua toh it'll return 0, if n->1 hua toh it'll return 1
	}

	return fibo(n-1) + fibo(n-2);
}

int main(){

	int n;
	cin>>n;

	cout << fibo(n) << endl;

	return 0;
}
















