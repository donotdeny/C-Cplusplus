#include<iostream>
#include<cmath>
using namespace std;

long long isPrime(long long n)
{
	for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int count=0;
		long long n;
		cin >> n;
		for(long long i=2;i<=sqrt(n);i++){
			if(isPrime(i)) count++;
		}
		cout << count << endl;
	}

return 0;
}

