#include<iostream>
using namespace std;
int a[100][100];
int n, m, count = 0;

void init()
{
	count = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j)
{
	if(i == n && j == m){
		count++;
		return;
	}
	if(i < n){
		Try(i+1, j);
	}
	if(j < m){
		Try(i, j+1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		init();
		Try(1, 1);
		cout << count << endl;
	}

return 0;
}

