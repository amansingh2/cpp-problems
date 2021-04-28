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
		int n,m;cin>>n>>m;
		int dp[10][m+1];

		dp[0][0] = 0;
		for(int i=1;i<=10;i++){
		for(int j=1;j<=m;j++){
			if(i + j > 9){
				dp[i][j] = (1 + dp[i][i + j  -  9])%mod;
			}else{
				dp[i][j] = 1;
			}
		}
	}

	int ans = 0;

	while(n>0){
		int x = n%10;
		n /= 10;
		ans += dp[x][m];
		ans = ans%mod;
	}

	cout<<ans<<endl;








	}
	return 0;
}






