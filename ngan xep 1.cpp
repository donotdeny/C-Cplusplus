#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> mys;
	int n;
	string s; 
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			mys.push(n);
		}
		if(s == "pop" && !mys.empty()) mys.pop();
		if(s == "show"){
			vector<int> a;
			if(mys.size() == 0){
				cout << "empty";
				continue;
			}
			while(mys.size() > 0){
				a.push_back(mys.top());
				mys.pop();
			}
			reverse(a.begin(), a.end()); // dao nguoc 
			for(int i = 0; i < a.size(); i++){
				cout << a[i] << ' ';
				mys.push(a[i]);
			}
			cout << endl;
		}
	}

return 0;
}

