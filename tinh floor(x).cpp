#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, x, temp = 0;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= x) temp = i; 
		}
		if(temp != 0) cout << temp+1;
		else cout << "-1";
		cout << endl;
	}

return 0;
}

