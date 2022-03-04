#include<iostream>
using namespace std;

int gt(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n+1];
		int temp[gt(n)][n+1];
		for(int i = 1; i <= n; i++){
			arr[i] = i;
		}
		for(int i = 0; i < gt(n); i++){
			for(int j = 1; j <= n; j++){
				temp[i][j] = arr[j];
			}
			nextGen(arr, n);
		}
		for(int i = gt(n)-1; i >= 0; i--){
			for(int j = 1; j <= n; j++){
				cout << temp[i][j];
			}
			cout << " ";
		}
		cout << endl;
	}

return 0;
}

