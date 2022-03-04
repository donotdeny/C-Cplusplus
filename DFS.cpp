#include<bits/stdc++.h>
using namespace std;

int n;
int a[50][50], chuaxet[50];

void init()
{
	cin >> n;
	for(int i = 1; i <= n; i++){
		chuaxet[i] = true;
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void DFS_Dequi(int u){
	int v;
	cout << " " << u;
	chuaxet[u] = false;
	for(v = 1; v <= n; v++){
		if(chuaxet[v] && a[u][v]){
			DFS_Dequi(v);
		}
	}
}

void DFS(int u){
	int Stack[50], dau=1, s, t;
	Stack[dau] = u;
	chuaxet[u] = false;
	cout << ' ' << u;
	while(dau>0){
		s=Stack[dau];
		dau--;
		for(t =1;t<=n; t++){
			if(chuaxet[t] && a[s][t]){
			cout << ' ' << t;
			chuaxet[t] = false;
			Stack[++dau]=s;
			Stack[++dau]=t;
			break;
			}
		}
	}

}

int main()
{
	init();
	int u;
	cout << "Dinh bat dau duyet:" << endl;
	cin >> u;
	//DFS_Dequi(u);
	DFS(u);

return 0;
}

