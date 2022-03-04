#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, count0 = 0, count1 = 0, count2 = 0;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 0) count0++;
			if(a[i] == 1) count1++;
			if(a[i] == 2) count2++;
		}
		for(int i = 0; i < count0; i++){
			cout << 0 << ' ';
		}
		for(int i = 0; i < count1; i++){
			cout << 1 << ' ';
		}
		for(int i = 0; i < count2; i++){
			cout << 2 << ' ';
		}
		cout << endl;
	}

return 0;
}

