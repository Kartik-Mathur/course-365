#include <iostream>
using namespace std;

int power(int x,int n){
	if(n == 0) return 1;

	int ans = x * power(x,n-1); // power(x, n-1) -> assumption
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 

	int x,n;
	cin>>x>>n;

	cout << power(x,n) << endl;

	return 0;
}
















