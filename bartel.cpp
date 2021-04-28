#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;

int rev[] = {0,1,5,-1,-1,2,-1,-1,8,-1};
bool get(int a,int b,int h,int m){
	if(rev[a/10]<0 || rev[a%10]<0 || rev[b%10]<0 || rev[b/10]<0){
		return 0;
	}
	int h1 = rev[b%10]*10 + rev[b/10];
	int m1 = rev[a%10]*10 + rev[a/10];
	return (h1<h && m1<m);
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	int t; cin>>t;
	while(t--){
		int h,m;cin>>h>>m;
		string s;cin>>s;
		int h1 = 10*(s[0] - '0') + s[1] - '0';
		int m1 = 10*(s[3] - '0') + s[4] - '0';
		while(!get(h1,m1,h,m)){
			m1++;
			if(m1 == m){
				m1 = 0;
				h1++;
			}
			if(h1 == h){
				h1=0;
			}
		}
		cout<<h1/10<<h1%10<<":"<<m1/10<<m1%10<<endl;
	}
	return 0;
}






