#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int d[300] ={}, res = 0;
		for(int i = 0; i < s.size(); i++){
			d[s[i]]++;
			if(res < d[s[i]]){
				res = d[s[i]];
			}
		}
		if(s.size() % 2 == 0 && res <= (s.size() - res)) cout << "1" << endl;
		else if(s.size() % 2 == 1 && res <= (s.size()/2 + 1)) cout << "1" << endl;
		else cout << "-1" << endl;
	}

return 0;
}

