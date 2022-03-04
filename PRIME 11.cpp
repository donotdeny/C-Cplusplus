#include<iostream>
#include<cmath>
using namespace std;

bool prime(long long n)
{
	if(n<2) return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0) return false;
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n, key=0;
		cin >> n;
		for(int i=2;i<=32;i++){
			if(n == (pow(2,i-1)*(pow(2,i)-1)) && prime(pow(2,i)-1)){
				cout << "1" << endl;
				key=1;
			}
		}
		if(key!=1) cout << "0" << endl;
	}

return 0;
}

