#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	stack<int> mys;
	while(q--){
		string s;
		cin >> s;
		int n;
		if(s == "PUSH"){
			cin >> n;
			mys.push(n);
		}
		if(s == "POP" && !mys.empty()) mys.pop();
		if(s == "PRINT"){
			if(mys.empty()) cout << "NONE" << endl;
			else cout << mys.top() << endl;
		}
	}

return 0;
}

