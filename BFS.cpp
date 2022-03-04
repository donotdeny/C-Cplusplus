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
				chuaxet[t] = false;
			}
		}
	}
}

int main()
{
	init();
	BFS(1);

return 0;
}

