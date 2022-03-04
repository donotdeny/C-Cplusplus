#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, x, temp;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x) temp = i;
		}
		cout << temp+1 << endl;
	}

return 0;
}

