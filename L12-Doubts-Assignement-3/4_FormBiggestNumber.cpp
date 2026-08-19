#include <iostream>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){

		string a[105];
		int n;
		cin>>n;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}


		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = 0; j < n - 1 - i ; ++j)
			{
				if(a[j]+a[j+1] > a[j+1] + a[j]){
					swap(a[j], a[j+1]);
				}
			}
		}

		for (int i = n-1; i >= 0; --i)
		{
			cout << a[i];
		}
		cout << endl;

	}


	return 0;
}
















