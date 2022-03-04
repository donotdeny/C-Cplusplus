#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n+1];
		a[0] = 0, a[1] = 1;
		for(int i=2;i<=n;i++){
			a[i]=(a[i-1]%1000000007+a[i-2]%1000000007)%1000000007;
		}
		cout << a[n]%1000000007 << endl;
	}

return 0;
}

