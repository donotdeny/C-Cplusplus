#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++){
			if(i == 1) cout << "1" << ' ';
			else {
				vector<int> res;
				int temp = i;
				while(temp > 0){
					res.push_back(temp % 2);
					temp /= 2;
				}
				reverse(res.begin(), res.end());
				for(int i = 0; i < res.size(); i++){
					cout << res[i];
				}
				cout << ' ';
			}
		}
		cout << endl;
	}

return 0;
}

