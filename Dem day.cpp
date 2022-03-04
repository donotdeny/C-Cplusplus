#include<iostream>
#include<string>
using namespace std;

long long const mod = 123456789;

long long sqr(long long x)
{
	return x*x;
}

long long mul(long long n)
{
	if(n == 0) return 1 % mod;
	if(n == 1) return 2 % mod;
	long long p = mul(n/2);
	if(n % 2 == 0) return (p%mod * p%mod) % mod;
	return 2*(sqr(p)%mod) % mod;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		n--;
		cout << mul(n) << endl;
	}

return 0;
}

