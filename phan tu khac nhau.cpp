#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int a[n], b[n-1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n-1; i++){
			cin >> b[i];
		}
		int res = n-1;
		for(int i = 0; i < n-1; i++){
			if(a[i] != b[i]){
				res = i;
				break;
			}
		}
		cout << res+1 << endl;
	}

return 0;
}

