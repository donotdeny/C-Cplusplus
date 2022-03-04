#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n, max = 0, k = 1000000007;
		cin >> n;
		long long a[n]; 
		for(int i = 0; i < n; i++){
			cin >> a[i]; 
		} 
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			max += i * a[i]; 
			max %= k;
		} 
		cout << max << endl;
	}

return 0;
}

