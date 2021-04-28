#include<bits/stdc++.h>
// #define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;
int tree[10000000];
int arr[1000000 + 5];
void update(int start,int end,int pos,int val,int node){
	if(start == end){
		arr[pos] = val;
		tree[node] = arr[pos];
		return;
	}

	int mid = (start + end)/2;

	if(pos >= start && pos <= mid){
		update(start,mid,pos,val,2*node);
	}else{
		update(mid + 1,end,pos,val,2*node  +1);
	}
	tree[node] = (tree[2*node]^tree[2*node + 1]);
}

int query(int start,int end,int l,int r,int node){
	if(r < start || l > end){
		return 0;
	}

	if(l<= start && r>= end){
		return tree[node];
	}

	int mid = (start + end)/2;
	int x = query(start,mid,l,r,2*node);
	int y = query(mid + 1,end,l,r,2*node + 1);
	return (x ^ y);	
	
}

void build(int start,int end,int node){
	if(start == end){
		tree[node] = arr[start];
		return;
	}

	int mid = (start + end)/2;
	build(start,mid,2*node);
	build(mid + 1,end,2*node+1);
	tree[node] = tree[2*node]^tree[2*node + 1];
	// return;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	memset(tree,0,sizeof(tree));
	memset(arr,0,sizeof(arr));

	int n,q;cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	build(1,n,1);

	while(q--){
		int k;cin>>k;
			if(k==1){
				int pos,val;cin>>pos>>val;
				update(1,n,pos,val,1);
			}else{
				int l,r;cin>>l>>r;
				cout<<query(1,n,l,r,1)<<endl;
			}
	}
	

	return 0;
}






