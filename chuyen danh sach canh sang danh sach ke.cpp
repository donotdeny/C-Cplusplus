#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int v, e;
		cin >> v >> e;
		int arr[v+1][v+1] = {0};
		for(int i = 0; i < e; i++){
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
			arr[b][a] = 1;
		}
		for(int i = 1; i <= v; i++){
			cout << i << ": ";
			for(int j = 1; j <= v; j++){
				if(arr[i][j] == 1) cout << j << ' ';
			}
			cout << endl;
		}
	}

	return 0;
}
