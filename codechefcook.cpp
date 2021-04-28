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
		int n,x;cin>>n>>x;
		std::vector<int>v(n,0);
		unorderd_map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>v[i];
			mp[v[i]]++;
		}

		int k=0;
		for(auto [x,y] : mp){
			k += (y-1);
		}

		cout<<mp.size() - ((k-x)>=0?0:(x-k))<<endl;

	}
	return 0;
}






