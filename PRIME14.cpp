#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int n)
{
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) count++;
	}
	if(count==0) return 1;
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i*i<=n;i++){
			if(isPrime(i)) cout << i*i << " ";
		}
		cout << endl;
	}

return 0;
}

