#include<bits/stdc++.h>
using namespace std;

int arr[100];
int key;

void res(int a[], int n)
{
	sort(a+1, a+n+1); 
	vector<int> rs;
	for(int i = 1; i <= n; i++){
		if(arr[i] == 1) rs.push_back(a[i]);
	}
	cout << "[";
	for(int i = 0; i < rs.size()-1; i++){
		cout << rs[i] << ' ';
	}
	cout << rs[rs.size()-1] << "] ";
}

void Try(int a[], int n, int i, int k)
{
	for(int j = 1; j >= 0; j--){
		arr[i] = j;
		if(i == n){
			int sum = 0;
			for(int l = 1; l <= n; l++){
				if(arr[l] == 1) sum += a[l];
			}
			if(sum  == k){
				res(a, n);
				key = 1;
			}
		}
		else Try(a, n, i+1, k);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		key = 0;
		int n, k;
		cin >> n >> k;
		int a[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a+1, a+1+n);
		Try(a, n, 1, k);
		if(key != 1) cout << "-1";
		cout << endl;
	}

return 0;
}

