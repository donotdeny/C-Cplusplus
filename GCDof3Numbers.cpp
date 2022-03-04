#include<iostream>
using namespace std;

long long GCD(int a, int b)
{
	if(b==0) return a;
	return GCD(b, a%b);
}

long long LCM(int a, int b)
{
	return (a*b)/GCD(a,b);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		cout << LCM(LCM(a,b),c) << endl;
	}
	

return 0;
}

