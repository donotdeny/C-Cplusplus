#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<string> q;
		q.push("9");
		while(q.size() > 0){
			string res = q.front();
			q.pop();
			long long temp = 0;
			for(int i = 0; i < res.size(); i++){
				temp = temp*10 + (int)(res[i] - '0');
				temp %= n;
			}
			if(temp == 0){
				cout << res;
				break;
			}
			q.push(res+"0");
			q.push(res+"9");
		}
		cout << endl;
	}

return 0;
}

