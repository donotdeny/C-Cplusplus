#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long f[30][30];
	memset(f, 0, sizeof(0));
	for(int i = 0; i <= 25; i++){
		f[i][0] = 1;
		f[0][i] = 1;
	}
	f[0][0] = 0;
	for(int i = 0; i <= 25; i++){
		for(int j = 0; j <= 25; j++){
			if(i == 0 || j == 0) continue;
			f[i][j] = f[i][j-1] + f[i-1][j];
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		cout << f[n][m] << endl;
	}

return 0;
}

