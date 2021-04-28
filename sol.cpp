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
		int n,e,h,a,b,c;cin>>n>>e>>h>>a>>b>>c;
		int ans = INT_MAX;
		if(e>=h){
			check = (e - abs(e-h)) + (e-h)/2;
		}else{
			check = (h - abs(e-h)) + (h-e)/3;
		}

		if(check >= n){

			if(e>=2*n){
				if(h>=3*n){
				ans = min(ans,n*min(a,min(b,c)));
				}

				if(h>=n && h<3*n){
					int x = a*n;
					int y = c*n;
					int z = (h/3)*b + (n - h/3)*a;
					ans = min(ans,min(x,min(y,z)));
				}

				if(h<n){
					int x =  a*n;
					int y = h*c + (n-h)*a;
					int z = (h/3)*b + (n - h/3)*a;
					ans = min(ans,min(x,min(y,z)));
				}
			}else if(e < 2*n){
				if(h>=3*n){
					int x = b*n;
					int y = (e/2)*a + (n - e/2)*b;
					
				}
			}



		}else{
			cout<<-1<<endl;
		}









	}
	return 0;
}






