#include<bits/stdc++.h>
using namespace std;

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int mat[2][2];
	memset(mat,1,sizeof(mat));
	bool c[2][2];
	memset(c,0,sizeof(c));

	int count = 0;

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(mat[i][j]&&c[i][j] == 0){
				count++;
			}
		}
	}

	cout<<count<<endl;

	return 0;
}






