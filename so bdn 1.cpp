#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n, res = 0, s = 1;
		cin >> n;
		vector<int> temp;
		int vt = n;
		while(n > 0){
			temp.push_back(n % 10);
			n /= 10;
		}
		reverse(temp.begin(), temp.end());
		for(int i = 0; i < temp.size(); i++){
			if(temp[i] > 1) {
				vt = i;
				break;
			}
		}
		for(int i = vt; i < temp.size(); i++){
			temp[i] = 1;
		}
		for(int i = temp.size()-1; i >= 0; i--){
			res += temp[i] * s;
			s *= 2;
		}
		cout << res << endl;
	}

return 0;
}

