#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

long long mul(long long a, long long b)
{
	if(b == 0) return 0;
	long long temp = mul(a, b/2);
	if(b & 1) return (temp*2 + a) % mod;
	return (temp*2) % mod;
}

long long power(long long n, long long k)
{
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	long long temp = power(n, k/2);
	long long res = mul(temp, temp);
	if(k & 1) return (res*n) % mod;
	return res % mod;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		cout << power(n, k) << endl;
	} 

return 0;
}

