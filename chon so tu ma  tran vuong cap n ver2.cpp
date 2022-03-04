#include<bits/stdc++.h>
using namespace std;


void res(int arr[], int n)
{
	for(int i=1;i<=n;i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}

bool lastGen(int arr[], int n){
	int k = n;
	for(int i = 1; i <= n ; i++){
		if(arr[i] != k) return false;
		k--;
	}
	return true;
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void nextGen(int arr[], int n){
	for(int i = n; i > 0; i--){
		if(arr[i] > arr[i-1]){
			int min = 99999, temp;
			for(int j = i; j <= n; j++){
				if(min > arr[j] && arr[j] > arr[i-1]){
					min = arr[j];
					temp = j;
				}
			}
			swap(arr[i-1], arr[temp]);
			for(int j = i, k = n; j <= k; j++, k--){
				swap(arr[j], arr[k]);
			}
			break;
		}
	}
}

int main()
{
	int n, k, count = 0, tmp = 0;
	cin >> n >> k;
	int a[n+1][n+1], arr[n+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		arr[i] = i;
	}
	while(lastGen(arr, n) == false){
		int temp = 0;
		for(int i = 1; i <= n; i++){
			temp += a[i][arr[i]];
		}
		if(temp == k) count++;
		nextGen(arr, n);
	}
	for(int i = n, j = 1; i > 0, j <= n; i--, j++){
		tmp += a[j][i];
	}
	if(tmp == k) count++;
	cout << count << endl;
	tmp = 0;
	for(int i = 1; i <= n; i++){
		arr[i] = i;
	}
	while(lastGen(arr, n) == false){
		int temp = 0;
		for(int i = 1; i <= n; i++){
			temp += a[i][arr[i]];
		}
		if(temp == k) res(arr, n);
		nextGen(arr, n);
	}
	for(int i = n, j = 1; i > 0, j <= n; i--, j++){
		tmp += a[j][i];
	}
	if(tmp == k){
		for(int i = n; i > 0; i--){
			cout << i << ' ';
		}
	}

return 0;
}

