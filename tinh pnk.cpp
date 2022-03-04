#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		long long n, k, res = 1;
		cin >> n >> k;
		if(k > n) res = 0;
		for(int i = n-k+1; i <= n; i++){
			res *= i;
			res %= mod;
		}
		cout << res << endl;
	}

return 0;
}

