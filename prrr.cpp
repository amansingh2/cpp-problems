// #include<bits/stdc++.h>
// #define int long long
// #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
// #define endl "\n"
// #define mod 1000000007
// using namespace std;

// int32_t main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif
// 	fastio
// 	int t; cin>>t;
// 	while(t--){
// 		int n;cin>>n;
// 		vector<int>v(n,0);

// 		for(int i=0;i<n;i++){
// 			cin>>v[i];
// 		}









// 	}
// 	return 0;
// }






#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

// `M × N` matrix
#define M 10
#define N 10

// Below arrays detail all eight possible movements from a cell
// (top, right, bottom, left, and four diagonal moves)
int row[] = { -1,1 ,0 ,0};
int col[] = { 0, 0, 1, -1};

// Function to check if it is safe to go to position `(x, y)`
// from the current position. The function returns false if `(x, y)`
// is not valid matrix coordinates or `(x, y)` represents water or
// position `(x, y)` is already processed

bool isSafe(int mat[M][N], int x, int y, bool processed[M][N])
{
	return (x >= 0) && (x < M) && (y >= 0) && (y < N) &&
		(mat[x][y] && !processed[x][y]);
}

void BFS(int mat[M][N], bool processed[M][N], int i, int j)
{
	// create an empty queue and enqueue source node
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));

	// mark source node as processed
	processed[i][j] = true;

	// loop till queue is empty
	while (!q.empty())
	{
		// dequeue front node and process it
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		// check for all eight possible movements from the current cell
		// and enqueue each valid movement
		for (int k = 0; k < 4; k++)
		{
			// skip if the location is invalid, or already
			// processed, or consists of water
			if (isSafe(mat, x + row[k], y + col[k], processed))
			{
				// mark it as processed and enqueue it
				processed[x + row[k]][y + col[k]] = 1;
				q.push(make_pair(x + row[k], y + col[k]));
			}
		}
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int mat[M][N]=
	{
		{ 1, 0, 1, 0, 0, 0, 1, 1, 1, 1 },
		{ 0, 0, 1, 0, 1, 0, 1, 0, 0, 0 },
		{ 1, 1, 1, 1, 0, 0, 1, 0, 0, 0 },
		{ 1, 0, 0, 1, 0, 1, 0, 0, 0, 0 },
		{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 },
		{ 0, 1, 0, 1, 0, 0, 1, 1, 1, 1 },
		{ 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
		{ 0, 0, 0, 1, 0, 0, 1, 1, 1, 0 },
		{ 1, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
		{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 }
	};

	// int mat[M][N]=
	// {
	// 	{ 0, 0},
	// 	{0 , 0}
	// };

	// stores if a cell is processed or not
	bool processed[M][N];

	// mark all cells as unprocessed
	memset(processed, 0, sizeof(processed));

	int island = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			// start BFS from each unprocessed node and
			// increment island count
			if (mat[i][j] && processed[i][j] == 0)
			{
				BFS(mat, processed, i, j);
				island++;
			}
		}
	}

	cout << "The total number of islands is " << island << endl;

	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
	long long int n,i,j,ara[200000],ara2[200000],sum=0,cur=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>ara[i];
		ara2[i]=ara[i];
	}
	sort(ara+1,ara+n+1);
	for(i=1;i<=n;i++)
	{
		if(ara[i]>sum){
		cur=i;}
		sum=sum+ara[i];
	}
	
	cout<<n-cur+1<<endl;
	for(i=1;i<=n;i++)
	{
		if(ara2[i]>=ara[cur])
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
}