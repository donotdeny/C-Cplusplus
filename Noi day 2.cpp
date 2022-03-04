#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		long long val, res = 0;
		priority_queue< long long, vector<long long>, greater<long long> > a;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> val;
			a.push(val);
		}
		while(a.size() > 1 ){
			long long x = a.top();
			a.pop();
			long long y = a.top();
			a.pop();
			long long temp = (x+y)%mod;
			a.push(temp);
			res += temp;
			res %= mod;
		}
		cout << res << endl;
	}

return 0;
}

