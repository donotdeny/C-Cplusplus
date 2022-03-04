#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, s, m;
		cin >> n >> s >> m;
		if(s*m > (s - s/7)*n) cout << "-1" << endl;
		// s*m: so luong thuc can thiet
		// s - s/7 so ngay co the mua luong thuc
		else{
			for(int i = 1; i <= s - s/7; i++){
				if(i*n >= s*m){
					cout << i << endl;
					break;
				}
			}
		}
	}

return 0;
}

