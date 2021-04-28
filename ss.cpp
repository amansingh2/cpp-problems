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
		int n,u,r,d,l;
	    cin>>n>>u>>r>>d>>l;
	    int fullx=0,fully=0;

	    if(u==n){
	    fullx++;
		}

	    if(d==n){
	    fullx++;
		}

	    if(l==n){
	    fully++;
		}

	    if(r==n){
	    fully++;
		}

	    int hoz=max(0,u-n+2)+max(0,d-n+2);
	    int ver=max(0,l-n+2)+max(0,r-n+2);

	    if(hoz>l+r||min(l,r)<fullx){
	    cout<<"NO"<<endl;
		}
	    else if(ver>u+d||min(u,d)<fully){
	    cout<<"NO"<<endl;
		}
	    else{
	    cout<<"YES"<<endl;
		}
	}
	return 0;
}






