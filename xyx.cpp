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
		std::vector<int>vx(n,0),vy(n,0);
		bool flag = false;
		for(int i=0;i<n;i++){
			cin>>vx[i];
			cin>>vy[i];
		}

		for(int i=0;i<n;i++){
			bool flag1 = true;
			for(int j=0;j<n;j++){
				if(abs(vx[i] - vx[j]) + abs(vy[i] - vy[j]) > k){
					flag1 = false;
					break;
				}
			}
			if(flag1){
				flag = true;
				break;
			}
		}


		if(flag){
			cout<<1<<endl;
			continue;
		}else{
			cout<<-1<<endl;
		}

	}
	return 0;
}






