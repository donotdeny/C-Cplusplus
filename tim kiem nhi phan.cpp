#include<bits/stdc++.h>
using namespace std;

int binary(int a[], int l, int r, int x)
{
	if(r >= l){
		int mid = (l+r)/2;
		if(a[mid] == x) return mid;
		if(a[mid] > x) return binary(a, l, mid-1, x);
		else if(a[mid] < x) return binary(a, mid+1, r, x);
	}
	return -1;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(binary(a, 0, n-1, x) == -1) cout << "NO";
		else cout << binary(a, 0, n-1, x)+1;
		cout << endl; 
	}

return 0;
}

