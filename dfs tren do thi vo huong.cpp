#include<bits/stdc++.h>
using namespace std;

int chuaxet[1001];
int arr[1001][1001], n, e, u;

void init()
{
	for(int i = 1; i <= n; i++){
		chuaxet[i] = true;
	}
}

void DFS_Dequi(int u){
	cout << u << ' ';
	chuaxet[u] = false;
	for(int i = 1; i <= n; i++){
		if(chuaxet[i] && arr[u][i]){
			DFS_Dequi(i);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e >> u;
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				arr[i][j] = 0;
			}
		}
		for(int i = 0; i < e; i++){
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
			arr[b][a] = 1;
		}
		init();
		DFS_Dequi(u);
		cout << endl;
	}

	return 0;
}

