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

int main()
{
	int t;
	cin >> t;
	while(t--){
		int a, x, y;
		cin >> a >> x >> y;
		long long ucln = GCD(x, y);
		while(ucln--){
			cout << a;
		}
		cout << endl;
	}

return 0;
}

