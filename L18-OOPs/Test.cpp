#include<bits/stdc++.h>
using namespace std;
#define int long long 

int solve(vector<int>vec, int left, int right, int mid,int ts){
    if(left >= right) return 0;
    int rs = 0;

    for(int i=left ; i <= right-1  ; i++){
    	rs += vec[i];
        if(rs == ts - rs){
        	
            return 1 + max(
            				solve(vec, left, i,(left+i)/2, rs), 
            				solve(vec, i+1, right, (i+1+right)/2, ts-rs)
            			);
        }
    }
    return 0;
}


int32_t main() {
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        vector<int>vec(n);
        int ts = 0;

        for(int i=0 ; i<vec.size() ; i++) {
        	cin >> vec[i];
        	ts+=vec[i];
        }
        // int cnt = 0;
        cout << solve(vec, 0, n-1, (n-1)/2, ts) << endl;
        
    }
    return 0;
}