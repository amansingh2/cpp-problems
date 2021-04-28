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
		int n,k;cin>>n>>k;
		k--;
		if(n%2 == 0){
		   cout<<k%n+1<<endl;
			continue;
		}
		int numOfCollision = k/(n/2);//will make extra steps taken by cat B!

		cout<<(k + numOfCollision)%n + 1<<endl;

	}
	return 0;
}






