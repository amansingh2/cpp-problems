#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;
const int maxm = 1e3 + 5;
int graph[maxm][maxm];
int n,m;

bool check(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m){
        return 1;
    }
    return 0;
}

void dfs(int x,int y){
    graph[x][y] = 1;
    if(check(x-1,y) && !graph[x-1][y]){
        dfs(x-1,y);
    }
    if(check(x+1,y) && !graph[x+1][y]){
        dfs(x+1,y);
    }
    if(check(x,y-1) && !graph[x][y-1]){
        dfs(x,y-1);
    }
    if(check(x,y+1) && !graph[x][y+1]){
        dfs(x,y+1);
    } 

    return ;
}
int32_t main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif
    fastio
    // int t; cin>>t;
    // while(t--){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<m;j++){
            graph[i][j] = (s[j]=='.'?0:1);
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!graph[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }

    cout<<ans<<endl;

    // }
    return 0;
}






