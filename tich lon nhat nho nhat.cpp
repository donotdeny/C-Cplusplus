#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		long long min = 100000000, max = -100000000, res = 0;
		cin >> n >> m;
		long long a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(max < a[i]) max = a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(min > b[i]) min = b[i];
		}
		res = max*min;
		cout << res << endl;
	}

return 0;
}

