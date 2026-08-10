#include <iostream>
using namespace std;

void solve(){
	int c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;

	int rn, cn;
	cin>>rn>>cn;

	int rick[100000], cab[100000];
	for (int i = 0; i < rn; ++i)
	{
		cin>>rick[i];
	}

	for (int i = 0; i < cn; ++i)
	{
		cin>>cab[i];
	}


	// Pehle check karo individual rides loge ek particular rickshaw ki or pass banwaoge us rickshaw ka
	int rick_mincost = 0, cab_mincost = 0;

	for (int i = 0; i < rn; ++i)
	{
		// individual ride cost for rick[i] -> rick[i]*c1
		// is rick[i] ko unlimited times use karne ki cost -> c2
		rick_mincost += min(rick[i]*c1, c2);
	}

	// Ya har rickshaw ka pass banwaaye -> c3
	rick_mincost = min(rick_mincost, c3);

	for (int i = 0; i < cn; ++i)
	{
		// individual ride cost for cab[i] -> cab[i]*c1
		// is cab[i] ko unlimited times use karne ki cost -> c2
		cab_mincost += min(cab[i]*c1, c2);
	}

	// Ya har cabshaw ka pass banwaaye -> c3
	cab_mincost = min(cab_mincost, c3);

	int ans = min(rick_mincost + cab_mincost, c4);
	cout << ans << endl;
}

int main(){

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}
















