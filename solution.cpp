#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;
int n,e,h,a,b,c;
bool isposs(int n){
	bool x =  n&(1);
	bool y =  n&(2);
	bool z =  n&(4);





}
int solve(int n){
    int ans = INT_MAX;
    int c = n;
    if(n&1){
    	if(e >= 2*n){
    		ans = min(ans,a*n);
    		c =  c-n;
      	}

      	if(e < 2*n){
      		ans =  
      	}
    }


}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	int t; cin>>t;
	while(t--){
		int ans = INT_MAX;
		cin>>n>>e>>h>>a>>b>>c;
		int check = 0;
		if(e>=h){
			check = (e - abs(e-h)) + (e-h)/2;
		}else{
			check = (h - abs(e-h)) + (h-e)/3;
		}

		if(check >= n){
			int x = n;
			for(int i=1;i<8;i++){
				int x = solve(i);
				ans = min(ans,x);
			}

			cout<<ans<<endl;
		}
		else{
		cout<<-1<<endl;
		}








	}
	return 0;
}














