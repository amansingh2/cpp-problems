#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;
 
bool cmp(pair<int,int>P1,pair<int,int>P2){
	return P1.first < P2.first;
}
 
int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	// int t; cin>>t;
	// while(t--){
	int n,x;cin>>n>>x;
 
	vector<pair<int,int>>v(n);
 
	int i=1;
	for(auto &[x,y]:v){
		cin>>x;
		y = i;
		i++;
	}
 
	sort(v.begin(), v.end(),cmp);
 
	// for(auto &[x,y]:v){
	// 	cout<<x<<" "<<y<<endl;
	// }
	bool flag = true;
	 int l=0,r=n-1;
	 while(l<r){
	 	if (v[l].first + v[r].first == x){
	 		cout<<l+1<<" "<<r+1<<endl;
	 		flag = false;
	 		break;
    	}else if (v[l].first + v[r].second < x)
            l++;
        else 
            r--;
	 }
 
	if(flag){
		cout<<"IMPOSSIBLE"<<endl;
	}
  	return 0;
}
 