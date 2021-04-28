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
	int t=1; 
	// cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>v(n,0);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int dp[n];
		for(int i=0;i<n;i++){
			dp[i] = 1;
		}
		// dp[0] = 1;
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(v[j] < v[i]){
					dp[i] = max(dp[i],dp[j] +1);
				}
				// dp[i] = max(dp[i-1],dp[i]);
			}
		}
		// cout<<dp[n-1]<<endl;
		int ans = -1;
		for(int i=0;i<n;i++){
			ans = (dp[i]>ans?dp[i]:ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}






