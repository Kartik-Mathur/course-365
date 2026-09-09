#include <iostream>
using namespace std;

int stairs(int n,int k){
	// base case
	if(n == 0){
		return 1;
	}

	if(n < 0){
		return 0;
	}

	// recursive case
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += stairs(n-i, k); // f(n-1, k) + f(n-2, k) + f(n-3, k) + ..... + f(n-k, k) 
	}

	return ans;
}

int main(){

	int n, k = 3;
	cin>>n;

	cout << stairs(n, k) << endl;

	return 0;
}
















