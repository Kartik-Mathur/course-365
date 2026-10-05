#include <iostream>
using namespace std;

int solve(int i, int j){
	// base case
	if(i == 0 and j == 0){
		return 1;
	}

	// recursive case
	int ans = 0;
	for (int k = 0; k < i; ++k)
	{
		ans += solve(k, j);
	}

	for (int k = 0; k < j; ++k)
	{
		ans += solve(i, k);
	}

	return ans;
}

int main(){

	cout << solve(3, 1) << endl;

	return 0;
}
















