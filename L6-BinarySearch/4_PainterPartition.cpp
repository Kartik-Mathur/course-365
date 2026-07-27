#include <iostream>
using namespace std;
#define ll long long

ll mx = 0, sum =0;

bool isPossible(ll k, ll n, ll *boards, ll mid){
	ll painter_cnt = 1;

	ll painted_len = 0;
	ll i = 0;

	while(painter_cnt <= k){
		painted_len = 0;

		while(i < n and painted_len + boards[i] <= mid){
			painted_len += boards[i];
			i++;
		}

		painter_cnt++;
		if(i == n){
			return true; // means saare board paint ho gaye
		}
	}

	return false; // bahar aaye toh mtlb saare board paint nhi ho paaye
}

ll solve(ll k, ll n, ll *boards){
	ll s = mx, e = sum;
	ll ans;
	while(s <= e){
		ll mid = (s+e)/2;

		if(isPossible(k,n,boards,mid) == true){
			ans = mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}

	return ans;
}

int main(){

	ll k,n;
	ll boards[100005];

	cin>>k>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>boards[i];
		mx = max(mx, boards[i]);
		sum += boards[i];
	}

	cout << solve(k,n,boards) << endl;


	return 0;
}
















