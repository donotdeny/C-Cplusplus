#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m, temp;
		cin >> n >> m;
		vector<int> res;
		for(int i = 0; i < n; i++){
			cin >> temp;
			res.push_back(temp);
		}
		for(int i = 0; i < m; i++){
			cin >> temp;
			res.push_back(temp);
		}
		sort(res.begin(), res.end());
		for(int i = 0; i < n+m; i++){
			cout << res[i] << ' ';
		}
		cout << endl;
	}

return 0;
}

