#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> m >> n >> k;
		int a[m+n];
		for(int i = 0 ; i < m+n; i++){
			cin >> a[i];
		}
		sort(a, a+m+n);
		cout << a[k-1] << endl;
	}

return 0;
}

