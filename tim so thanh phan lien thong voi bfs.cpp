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

void BFS(int u)
{
	int queue[5000], low=1, high=1, s, t;
	queue[low]=u;
	chuaxet[u]= false;
	while(low <= high){
		s = queue[low];
		low++;
	//	cout << ' ' << s;
		for(t = 1; t <= n; t++){
			if(arr[s][t] && chuaxet[t]){
				high++;
				queue[high] = t;
				chuaxet[t] = false;
			}
		}
	}
}


int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e;
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
		int solt = 0;
		for(int u = 1; u <= n; u++){
			if(chuaxet[u]){
				solt++;
				BFS(u);
			}
		}
		cout << solt << endl;
	}

	return 0;
}

