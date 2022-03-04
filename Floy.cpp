#include<bits/stdc++.h>
using namespace std;

int A[50][50], D[50][50], S[50][50];
int n, u, v, k;

void init()
{
	cout << "Nhap dinh dau: ";
	cin >> u;
	cout << "Nhap dinh cuoi: ";
	cin >> v;
	int num;
	fstream f("Floy.txt");
	f >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			f >> num;
			if(i != j && num == 0) A[i][j] = 10000;
			else A[i][j] = num;
		}
	}
}

void res()
{
	if(D[u][v] >= 10000){
		cout << "Khong co duong di";
		return;
	}
	else{
		cout << "Duong di ngan nhat: " << D[u][v];
		cout << endl << u << " ";
		while(u != v){
			cout << S[u][v] << ' ';
			u = S[u][v];
		}
		cout << endl;
	}
}

void Floy(){
	int i, j, k, found;
	for(i=1; i<=n; i++){
		for(j=1; j<=n;j++){
			D[i][j]=A[i][j];
			if (D[i][j]==10000) S[i][j]=0;
			else S[i][j]=j;
		}
	}
	for (k=1; k<=n; k++){
		for (i=1; i<=n; i++){
			for (j=1; j<=n; j++){
				if (D[i][k]!=10000 && D[i][j]>(D[i][k]+D[k][j]) ){
					D[i][j]=D[i][k]+D[k][j];
					S[i][j]=S[i][k];
				}
			}
		}
	}
}

int main()
{
	init();
	Floy();
	res();

return 0;
}
