#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a+n);
		int left, right;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				left = i;
				break;
			}
		}
		for(int i = n-1; i >= 0; i--){
			if(a[i] != b[i]){
				right = i;
				break;
			}
		}
		cout << left+1 << " " << right+1 << endl;
	}

return 0;
}

