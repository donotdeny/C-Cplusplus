#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int sumNumber(int n)
{
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, temp=0;
		cin >> n;
		int sum = sumNumber(n);
		if(isPrime(n)||n==1) cout << "NO" << endl;
		else {
			for(int i=2;i<=sqrt(n);i++){
				while(n%i==0){
					temp+=sumNumber(i);
					n/=i;
				}
				if(n==1) break;
			}
			if(n!=1) temp+=sumNumber(n);
			if(temp==sum) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

return 0;
}

