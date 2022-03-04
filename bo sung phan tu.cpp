#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		int a[n], used[40000] ={0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			used[a[i]] = 1;
		}
		sort(a, a+n);
		for(int i = a[0]; i <= a[n-1]; i++){
			if(used[i] == 0) count++;
		}
		cout << count << endl;
	}

return 0;
}

