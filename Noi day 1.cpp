#include<bits/stdc++.h>
using namespace std;

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
			a.push(x+y);
			res += x+y;
		}
		cout << res << endl;
	}

return 0;
}

