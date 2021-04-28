#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;


int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	int t; cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			mp[x]++;
		}

		map<int,int>mp1;
		for(auto[a,b] : mp){
			mp1[b]++;
		}

		int ans = n;
		int left=0;
		int right = n;
		int rtcnt = mp.size();

		for(auto[x, y] : mp1){
			ans = min(ans,left + right - rtcnt*x);
			left += x*y;
			right -= x*y;
			rtcnt -= y;
		}

		cout<<ans<<endl;
	}
	return 0;
}






