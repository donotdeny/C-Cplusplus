#include<iostream>
using namespace std;

int test(long long n)
{
	if(n%10==6){
		n/=10;
		if(n%10==8) return 1;
	}
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << test(n) << endl;
	}

return 0;
}

