#include<bits/stdc++.h>
// #define int long long
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
		int n,q;cin>>n>>q;
		std::vector<int>v(n,0);
		int x = 0;
		std::vector<int>in(32,0);
		for(int i=0;i<n;i++){
			cin>>v[i];
			x |= v[i];
			for(int j=0;j<31;j++){
				if((1<<j)&v[i]){
					in[j]++;
				}
			}
		}
		cout<<x<<endl;
		while(q--){
			int pos,val;
			cin>>pos>>val;
			int r = v[pos-1];
			for(int j=0;j<31;j++){
				if((1<<j)&r){
					in[j]--;
				}
			}
			v[pos-1] = val;
			for(int j=0;j<31;j++){
				if((1<<j)&val){
					in[j]++;
				}
			}

			int k = 0;
			for(int i=0;i<31;i++){
				if(in[i]!=0){
					k += (int)(1<<i);
				}
			}

			cout<<k<<endl;

		}
	}
	return 0;
}






