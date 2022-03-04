#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

long long pow(long long n, long long k)
{
	if(k == 1) return n%mod;
	long long tmp = pow(n, k/2);
	if(k%2 == 0) return (tmp * tmp % mod);
	return (tmp * tmp % mod) * n % mod;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long k = 0, m = n;
		while(m){ // dao so
			k = 10*k + m%10;
			m /= 10;
		}
		cout << pow(n, k) << endl;
	}

return 0;
}

