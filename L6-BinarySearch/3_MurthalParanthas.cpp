#include <iostream>
#include <climits>
using namespace std;

#define ll long long

bool isPossibleToCook(ll total_paranthas, ll n, ll *cook, ll mid){

	for (int i = 0; i < n; ++i)
	{
		ll r = cook[i];
		ll cnt = 1, t = 0;

		while(t + cnt * r <= mid){
			total_paranthas --;

			if(total_paranthas == 0){
				return true;
			}

			t += cnt*r;
			cnt++;
		}
	}

	return false;
}

ll murthalParanthas(ll total_paranthas, ll n, ll *cook){
	ll s = 0, e = INT_MAX;

	ll ans = INT_MAX; // because we need minimum time
	while(s <= e){
		ll mid = (s+e)/2;
		if(isPossibleToCook(total_paranthas, n, cook, mid) == true){
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
	ll total_paranthas, n;
	ll cook[100005];

	cin>>total_paranthas >> n;
	for (int i = 0; i < n; ++i)
	{
		cin>>cook[i];
	}

	cout << murthalParanthas(total_paranthas, n, cook) << endl;

	return 0;
}
















