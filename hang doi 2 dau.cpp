#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	deque<int> de;
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSHFRONT"){
			int x;
			cin >> x;
			de.push_front(x);
		}
		if(s == "PRINTFRONT"){
			if(de.empty()) cout << "NONE" << endl;
			else cout << de.front() << endl;
		}
		if(s == "POPFRONT" && !de.empty()) de.pop_front();
		if(s == "PUSHBACK"){
			int x;
			cin >> x;
			de.push_back(x);
		}
		if(s == "PRINTBACK"){
			if(de.empty()) cout << "NONE" << endl;
			else cout << de.back() << endl;
		}
		if(s == "POPBACK" && !de.empty()) de.pop_back();
	}

	return 0;
}
