#include<bits/stdc++.h>
using namespace std;

int n, dau, cuoi;
int a[50][50], chuaxet[50], truoc[50];

void init()
{
	cin >> n;
	for(int i = 1; i <= n; i++){
		chuaxet[i] = true;
		truoc[i] = 0;
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void BFS(int u)
{
	int queue[50], low=1, high=1, s, t;
	queue[low]=u;
	chuaxet[u]= false;
	while(low <= high){
		s = queue[low];
		low++;
		cout << ' ' << s;
		for(t = 1; t <= n; t++){
			if(a[s][t] && chuaxet[t]){
				high++;
				queue[high] = t;
				truoc[t] = s;
				chuaxet[t] = false;
			}
		}
	}
} 

void duongDi()
{
	if(truoc[cuoi] == 0){
		cout << "Ko co duong di!" << endl;
		return;
	}
	cout << endl << "Duong di: ";
	int j = cuoi;
	cout << " " << j;
	while(truoc[j] != dau){
		cout << " " << truoc[j];
		j = truoc[j];
	}
}

int main()
{
	init();
	cout << "Nhap dinh dau:";
	cin >> dau;
	cout << "Nhap dinh cuoi";
	cin >> cuoi;
	BFS(dau);
	duongDi();

return 0;
}

