#include <iostream>
using namespace std;

int main(){

	int a[10000], b[100000];

	int t;
	cin>>t;

	while(t--){
		int n, m;
		cin>>n>>m;

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
		}

		int sa = 0, sb = 0, ans = 0;
		int i = 0,j = 0;
		while(i < n and j < m){
			if(a[i] == b[j]){
				if(sa > sb) ans += sa;
				else ans += sb;

				ans += a[i];
				i++;
				j++;
				sa = sb = 0;
			}
			else if(a[i] < b[j]){
				sa += a[i++];
			}
			else{
				sb += b[j++];
			}
		}

		while(i < n){
			sa += a[i++];
		}

		while(j<m){
			sb += b[j++];
		}

		if(sa > sb) ans += sa;
		else ans += sb;

		cout << ans << endl;

	}

	return 0;
}
















