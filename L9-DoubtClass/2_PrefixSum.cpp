#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 10, 4, 5};
	int n = sizeof(a)/sizeof(int);

	int ps[100];
	ps[0] = a[0];

	for (int i = 1; i < n; ++i)
	{
		ps[i] = ps[i-1] + a[i];
	}

	int ans = INT_MIN;
	int si, sj;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			// int sum = ps[j] - ( (i-1)>=0 ? ps[i-1] : 0);
			int sum;
			if(i-1>=0){
				sum = ps[j] - ps[i-1];
			}
			else{
				sum = ps[j];
			}

			// cout << ", Sum : " << sum << endl;
			// ans = max(ans, sum);
			if(sum > ans){
				ans = sum;
				si = i;
				sj = j;
			}
		}
	}


	for (int i = si; i <= sj; ++i)
	{
		cout << a[i] <<" ";
	}

	cout << ", Max Sum: "<<ans<<endl;

	return 0;
}
















