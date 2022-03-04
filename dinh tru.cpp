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

void reInit()
{
	for(int i = 1; i <= n; i++){
		chuaxet[i] = true;
	}
}

bool soLienThong() // tp lien thong > 1 ?
{
	for(int i = 1; i <= n; i++){
		if(chuaxet[i]) return true;
	}
	return false;
}

int main()
{
	init();
	reInit();
	for(int i = 1; i <= n; i++){
		DFS_Dequi(1);
		if(soLienThong) cout << i << " la dinh tru" << endl;
		reInit();
	}

return 0;
}

