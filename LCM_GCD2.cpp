#include<iostream>
using namespace std;

long long GCD(long long a, long long b)
{
	long long tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

long long LCM(long long a, long long b)
{
	return a*b/(GCD(a,b));
}

int main()
{
	int t;
	cin >> t;
	long long n, i;
	while(t--){
		long long k=1;
		cin >> n;
		if(n<0) n*=-1;
		for(i=1;i<=n;i++){
			k = LCM(k,i);
		}
		cout << k << endl;
	}

return 0;
}

