#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, tmp, digits[10];
		cin >> n;
		long long a[n];
		for(int i = 0; i <= 9; i++){
			digits[i] = 0;
		}
		for(int i = 0; i < n; i++){
			cin >> a[i];
			while(a[i] > 0){
				tmp = a[i] % 10;
				digits[tmp] = 1;
				a[i] /= 10;
			}
		}
		for(int i = 0; i <= 9; i++){
			if(digits[i] == 1) cout << i << ' ';
		}
		cout << endl;
	}

return 0;
}

