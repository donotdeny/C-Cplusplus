#include<iostream>
using namespace std;

long long GCD(long long a, long long b)
{
	if(a<0) a*=-1;
	if(b<0) b*=-1;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

long long LCM(long long a, long long b)
{
	return a*b/(GCD(a,b));
}

int main()
{
	int n, j=0;
	cin >> n;
	if(n<1||n>100) return 0;
	while(n--){
		long long a, b;
		cin >> a >> b;
		cout << LCM(a,b) << " " << GCD(a,b) << endl;
	}

return 0;
}

