#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;
#define N 5
vector<int>g[N];

void bfs(int start){
	queue<int>q;
	q.push(start);

	while(q.empty()){
		int v = q.front();
		q.pop();
		if(visited[v]){
			continue;
		}
		cout<<v<<" ";
		visited[v] = true;
		for(auto x : g[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}

	cout<<endl;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	// int t; cin>>t;
	// while(t--){


	






	// }
	return 0;
}






