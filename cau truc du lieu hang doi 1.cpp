#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		queue<int> q;
		int n, k, num;
		cin >> n;
		while(n--){
			cin >> k;
			if(k == 3){
				cin >> num;
				q.push(num);
			}
			if(k == 1) cout << q.size() << endl;
			if(k == 2){
				if(q.empty()) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			if(k == 4 && !q.empty()) q.pop();
			if(k == 5){
				if(q.empty()) cout << "-1" << endl;
				else cout << q.front() << endl;
			}
			if(k == 6){
				if(q.empty()) cout << "-1" << endl;
				else cout << q.back() << endl;
			}
		}
	}

return 0;
}

