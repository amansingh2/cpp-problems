#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;

int solve(string s1,int k){
	
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	int t; cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int cnt1 = 0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				cnt1++;
			}
		}

		if(cnt1==0 || cnt1 == n){
			cout<<0<<endl;
			cintinue;
		}
		int i=0;
		while(s[i]=='0')i++;
		int j=n-1;
		while(s[j]=='0')j--;

		string s1 = s.substr(i,j-i+1);
		if(i>0){
			k--;
		}
		if(j<n-1){
			k--;
		}

		int ans = solve(s1,k-2);

	}
	return 0;
}






