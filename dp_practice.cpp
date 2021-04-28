#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;

int brute_iterative(string x,int n,string y,int m){
	///considering y as always smaller!!
	for(int i=0;i<(m<<1);i++){
		string s1;
		for(int j=0;j<m;j++){
			if(j&i){
				s1.push_back(y[j]);
			}
		}
	}
}
int brute_recursive(string x,int n,string y,int m){

}
int solve(){
	string x,y;cin>>x>>y;
	n=x.length();
	m = y.lenght();
	brute_iterative(x,n,y,m);
	brute_recursive(x,n,y,m);
	recursive_dp(x,n,y,m);
	bottom_up_dp(x,n,y,m);
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}






