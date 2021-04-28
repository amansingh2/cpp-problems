// #include<bits/stdc++.h>
// #define int long long
// #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
// #define endl "\n"
// #define mod 1000000007
// using namespace std;

// int solve(int arr[],int left, int right){
// 	if(left == right){
// 		return 0;
// 	}

// 	int min_cost = INT_MAX;
// 	int count;
// 	for(int k=left; k<right; k++){
// 		int count = solve(arr,left,k) + solve(arr,k+1,right) + arr[left-1]*arr[k]*arr[right];
// 		min_cost = min(count,min_cost);
// 	}

// 	return min_cost;
// }

// int32_t main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif
// 	fastio
// 	// int t; cin>>t;
// 	// while(t--){
// 	int n;cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int left = 1;
// 	int right = n-1;
// 	cout<<solve(arr,left,right)<<endl;


// 	// }
// 	return 0;
// }











#include<bits/stdc++.h>
// #define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;
int tree[100000];
int arr[1000000 + 5];

void build(int start,int end,int node){
	if(start == end){
		tree[node] = arr[start];
		return;
	}

	int mid = (start + end)/2;
	build(start,mid,2*node);
	build(mid + 1,end,2*node+1);
	tree[node] = tree[2*node] + tree[2*node + 1];
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

	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	build(0,n-1,1);

	for(int i=0;i<=15;i++){
		cout<<tree[i]<<" ";
	}
	

	return 0;
}






