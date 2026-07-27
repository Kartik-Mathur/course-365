#include <iostream>
#include <algorithm> // header file
using namespace std;
#define ll long long

bool isPossible(ll n, ll total_cows, ll *stalls, ll d){
	ll pc = 1;
	ll pd = stalls[0];

	for (int i = 0; i < n; ++i)
	{
		ll cd = stalls[i];
		if(cd - pd >= d){
			pc++;
			pd = cd;

			if(pc == total_cows){
				return true;
			}
		}
	}

	return false;
}

ll aggresiveCows(ll n, ll total_cows, ll *stalls){
	ll s = 0, e = stalls[n-1] - stalls[0];

	ll ans = 0;
	while(s <= e){
		ll mid = (s+e)/2;
		if(isPossible(n, total_cows, stalls, mid) == true){
			// mid ko store kr lenge as ans
			ans = mid; 
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}

	return ans;
}

int main(){

	ll n, total_cows;
	ll stalls[100005];

	cin>>n>>total_cows;

	for (int i = 0; i < n; ++i)
	{
		cin>>stalls[i];
	}

	sort(stalls, stalls+n);

	cout << aggresiveCows(n, total_cows, stalls) << endl;

	return 0;
}
















