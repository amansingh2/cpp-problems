// #include<bits/stdc++.h>
// #define int long long
// #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
// #define mod 1000000007
// using namespace std;
#include<stdio.h>
#define INT_MIN -2000000

int max(int a,int b){
	if(a>b){
		return a;
	}

	return b;
}




int solve(int arr[],int l){
	if(l<0){
		return INT_MIN;
	}
	return max(arr[l],solve(arr,l-1));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	// fastio
	// int t; cin>>t;
	// while(t--){
	int n;
	// cin>>n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		// cin>>arr[i];
		scanf("%d",&arr[i]);
	}

	int ans = solve(arr,n-1);
	// cout<<ans<<endl;
	printf("%d\n",ans);



	// }
	return 0;
}






