#include<iostream>
#include<cmath>
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

int yes(long long n)
{
	int dem=0;
	while(n>0){
		dem++;
		n /= 10;
	}
	return dem;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		long long result;
		long long temp = pow(10, n-1);
		long long kq = LCM(LCM(x,y), z);
		if(temp % kq ==0) result = temp / kq;
		else result = (temp / kq) +1;
		long long final = result * kq;
		if(final % x == 0 && final % y == 0 && final % z == 0 && yes(final) == n) 
			cout << final << endl;
		else cout << "-1" << endl;
	} 

return 0;
}

