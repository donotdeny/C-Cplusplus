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
	for(int i = 1; i < n; i++){
		for(int j = i+1; j <= n; j++){
			if(a[i][j]){ // (i,j) la 1 canh
				a[i][j] = 0; a[j][i] = 0; // loai canh
				DFS_Dequi(1);
				if(soLienThong()) cout << "Canh " << i << " " << j << endl;
				a[i][j] = 1; a[j][i] = 1;
				reInit();
			}
		}
	}

return 0;
}

