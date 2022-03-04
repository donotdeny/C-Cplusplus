#include<iostream>
using namespace std;

int m, a[100], n;
bool ok;
long long res = 1e18;

void next(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == m){
			long long s = 0;
			for(int l = 1; l <= m; l++){
				s = 10 * s + a[l];
			}
			s *= 9;
			if(s % n == 0 && s >= n){
				res = min(res, s);
				ok = true;
			}
		}
		else next(i+1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		m = 1;
		ok = false;
		res = 1e18;
		cin >> n;
		while(m <= 17 && !ok){
			next(1);
			m++;
		}
		cout << res << endl;
	}

return 0;
}

