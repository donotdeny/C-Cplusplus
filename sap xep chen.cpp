#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(n >= 1) cout << "Buoc 0: " << a[0] << endl;
	for(int i = 1; i < n; i++){
		int j = i-1;
		int t = a[i];
		while(t < a[j] && j >= 0){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = t;
		cout << "Buoc " << i << ": ";
		for(int j = 0; j < i+1; j++){
			cout << a[j] << ' ';
		}
		cout << endl;
	}

return 0;
}

