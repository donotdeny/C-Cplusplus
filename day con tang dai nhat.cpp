#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	int l[n];
	l[0] = 1;
	for(int i = 1 ; i < n; i++){
		int lmax = 0;
		for(int j = 0; j < i; j++){
			if(a[j] < a[i] && lmax < l[j])
				lmax = l[j];
		}
		l[i] = lmax + 1;
	}
	int max = l[0];
	for(int i = 0 ; i < n; i++){
		if(max < l[i]) max = l[i];
	}
	cout << max << endl;

return 0;
}

