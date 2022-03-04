#include<bits/stdc++.h>
using namespace std;

int chuaxet[1001];
int arr[1001][1001], n, e, u, dau, cuoi, truoc[5000];

void init()
{
	for(int i = 1; i <= n; i++){
		chuaxet[i] = true;
	}
}

void DFS_Dequi(int u){
//	cout << u << ' ';
	chuaxet[u] = false;
	for(int i = 1; i <= n; i++){
		if(chuaxet[i] && arr[u][i]){
			truoc[i] = u;
			DFS_Dequi(i);
		}
	}
}

void duongDi()
{
	if(truoc[cuoi] == 0){
		cout << "-1" << endl;
		return;
	}
	int j = cuoi;
	vector<int> res;
	res.push_back(j);
	while(truoc[j] != dau){
		res.push_back(truoc[j]);
		j = truoc[j];
	}
	res.push_back(dau);
	reverse(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++){
		cout << res[i] << ' ';
	}
	
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e >> dau >> cuoi;
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
		DFS_Dequi(dau);
		duongDi();
		cout << endl;
	}

	return 0;
}

