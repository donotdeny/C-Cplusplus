#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> qu;
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		int num;
		if(s == "PUSH"){
			cin >> num;
			qu.push(num);
		}
		if(s == "POP" && !qu.empty()) qu.pop();
		if(s == "PRINTFRONT"){
			if(!qu.empty()) cout << qu.front() << endl;
			else cout << "NONE" << endl;
		}
	}

return 0;
}

