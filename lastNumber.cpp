#include<iostream>
using namespace std;

int result(int n)
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
		int n;
		cin >> n;
		while(result(n)>=10){
			n = result(n);
		}
		cout << result(n) << endl;
	}

return 0;
}

