#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;

struct data{
	int b,e;
	string name;
	int l;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	int d,i,s,v,f;
	cin>>d>>i>>s>>v>>f;

	data arr[s];

	for(int i=0;i<s;i++){
		cin>>arr[i].b;
		cin>>arr[i].e;;
		cin>>arr[i].name;
		cin>>arr[i].l;
	}

	for(int i=0;i<v;i++){
		int p;cin>>p;
		while(p--){
			string x;
			cin>>x;
		}
	}







	return 0;
}






