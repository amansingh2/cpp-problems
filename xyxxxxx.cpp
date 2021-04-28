#include<bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define mod 1000000007
using namespace std;

int searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size();
    int m = A[0].size();
    int i=n-1;
    while((i>0)&& (A[i][0]>B)){
        i--;
    }
    // if(i>0)
    // i--;
    if(A[i][0]==B){
        return 1;
    }
    int x=0;
    int y = m-1;
    while(x<=y){
        int mid = (x + y)/2;
        if(A[i][mid] == B){
            return 1;
        }else if(A[i][mid] > B){
            y = mid;
        }else{
            x = mid +1;
        }
    }
    
    return 0;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fastio
	int t; cin>>t;
	while(t--){


		vector<vector<int>>v(4,vector<int>(10,0));
		for(int i=0;i<4;i++){
			for(int j=0;j<10;j++){
				cin>>v[i][j];
				cout<<v[i][j]<<" ";			
			}
			cout<<endl;
		}
     cout<<searchMatrix(v,81)<<endl;
     cout<<10<<endl;





	}
	return 0;
}






