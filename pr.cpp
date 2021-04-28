#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
#define inf LLONG_MAX
using namespace std;

bool visited[5] = {0};

void dfs(vector<int>*v,int n,int start){
	if(visited[start] == true){
		return ;
	}
	visited[start] = true;
	cout<<start<<" ";
	for(int x : v[start]){
		if(visited[x] == false){
			dfs(v,n,x);
		}
	}
}

void bfs(vector<int>*v,int n,int start){
	visited[start] = true;
	queue<int>q;
	q.push(start);
	while(!q.empty()){
		int s = q.front();
		cout<<s<<" ";
			q.pop();
		for(int x : v[s]){
			if(visited[x] == true){
				continue;
			}else{
				q.push(x);
				visited[x] = true;
			}
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
		int n;cin>>n;
		vector<int>v[n];
		for(int j=0;j<n;j++){
			int x,y;cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
			bfs(v,n,3);
			cout<<endl;
			memset(visited,0,sizeof(visited));
			dfs(v,n,3);
	}
	return 0;
}








