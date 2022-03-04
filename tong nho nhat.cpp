#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long x = 0, y = 0;
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		// 5 3 0 7 4
		// 0 3 4 5 7 
		for(int i = 0; i < n; i++){
			if(i % 2 == 0) x = 10*x + a[i];
			else y = 10*y + a[i];
		}
		cout << x + y << endl;
	}

return 0;
}

