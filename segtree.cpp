#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;
static int segTree[10000000];

// void update(int pos,int dif,int start,int end,int index){
// 	if(pos < start || pos > end ){
// 		return;
// 	}

// 	segTree[index] += dif;
// 	if(start != end){
// 		int mid = (start + end)/2;
// 		update(pos,dif,start,mid,2*index + 1);
// 		update(pos,dif,mid + 1,end,2*index + 2);
// 	}

// }

int query(int arr,int node,int start,int end,int l,int r){
	if(r < start || end < l){
			return 0;
	}
	if(l <= start && end <= r){
		return segTree[node];
	}
	int mid = (start + end)/2;
	return query(arr,2*node + 1,start, mid,l,r) + query(arr,2*node +2 ,mid +1,end,l,r);

}

void build(int arr[],int start,int end,int index){
	if(start == end){
		segTree[index] = arr[start];
	}

	int mid  = (start + end)/2;
	build(arr,start,mid,2*index);
	build(arr,mid + 1,end,2*index+1);
	segTree[index] = segTree[2*index] + segTree[2*index +1];
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	memset(segTree,0,sizeof(segTree));
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	build(arr,0,n-1,1);
	for(int i=0;i<=15;i++){
		cout<<segTree[i]<<" ";
	}
	// int q;cin>>q;
	
	// while(q--){
	// 	int op;cin>>op;
	// 	if(op==1){
	// 		int pos,val;
	// 		cin>>pos>>val;
	// 		int dif = val - arr[pos];
	// 		arr[pos] = val;
	// 		update(pos,dif,0,n-1,0);
	// 	}else{
	// 		int l,r;cin>>l>>r;
	// 		cout<<query(l,r,0,n-1,0)<<endl;
	// 	}

	// }



	return 0;
}






