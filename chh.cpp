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
		int x;cin>>x;
		int count = 0;
		while(count*(count+1) < 2*x){
			count++;
		}

		if(count*(count +1)/2 == x + 1){
			count++;
		}
		cout<<count<<endl;








	}
	return 0;
}






