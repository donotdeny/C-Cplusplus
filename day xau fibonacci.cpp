#include<bits/stdc++.h>
using namespace std;

long long F[93];

int main()
{
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i <= 92; i++){
		F[i] = F[i-1] + F[i-2];
	}
	int t;
	cin >> t;
	while(t--){
		long long n, i;
		cin >> n >> i;
		while(n > 2){
			if(i <= F[n-2]) n-=2;
			else {
				i -= F[n-2];
				n--;
			}
		}
		if(n == 1) cout << 'A';
		else cout << 'B';
		cout << endl;
	}

return 0;
}
