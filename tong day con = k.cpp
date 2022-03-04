#include<bits/stdc++.h>
using namespace std;

int n, k, co = 0;
int a[1000], arr[1000];

void Try(int i)
{
	for(int j = 0; j <= 1; j++){
		arr[i] = j;
		if(i == n){
			int sum = 0;
			for(int l = 1; l <= n; l++){
				if(arr[l] == 1) sum += a[l];
			}
			if(sum == k){
				for(int l = 1; l <= n; l++){
					if(arr[l] == 1) cout << a[l] << ' ';
				}
				co++;
				cout << endl;
			}
		}
		else Try(i+1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Try(1);
		
	}

return 0;
}

