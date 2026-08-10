#include <iostream>
#include <climits>
using namespace std;

int kadanes(int *a,int n){
	int sum = 0;
	int ans = INT_MIN;

	bool isPositivePresent = false;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];

		if(sum < 0){
			sum = 0;
		}
		
		ans = max(ans, sum);
	}

	return ans;
}

int totalSum(int *a, int n){
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	return sum;
}

int main(){


	int t;
	cin>>t;

	while(t -- ){
		int a[10000];
		int n;
		cin>>n;
		
		int maxElement = INT_MIN;
		bool isPositivePresent = false;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if(a[i] >= 0){
				isPositivePresent = true;
			}
			maxElement = max(maxElement, a[i]);
		}


		if(isPositivePresent == false){
			cout << maxElement << endl;
			continue;
		}

		
		int op1 = kadanes(a,n);
		int ts = totalSum(a,n);
		// flip the sign
		for (int i = 0; i < n; ++i)
		{
			a[i] = -a[i];
		}

		int x = kadanes(a,n);
		int op2 = ts + x;

		cout << max(op1,op2) << endl;
	}
	


	return 0;
}
















