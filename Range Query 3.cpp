#include<iostream>
using namespace std;

int isPrime(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int a, b, count=0;
		cin >> a >> b;
		for(int i=a;i<=b;i++){
			if(isPrime(i)) count++;
		}
		cout << count << endl;
	}

return 0;
}

