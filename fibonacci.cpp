#include<iostream>
#include<cmath>
using namespace std;

long long fibonacci(int n)
{
	return (pow(1+sqrt(5),n)-pow(1-sqrt(5),n))/(pow(2,n)*sqrt(5));
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fibonacci(n) << endl;
	}
	

return 0;
}

