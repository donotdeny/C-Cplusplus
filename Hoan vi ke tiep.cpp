#include<iostream>
using namespace std;

bool lastGen(int arr[], int n){
	int k = n;
	for(int i = 1; i <=n ; i++){
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

void print(int arr[], int n){
	for(int i = 1; i <= n; i++){
			cout << arr[i] << " ";
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
		for(int i = 1; i <= n; i++){
			cin >> arr[i];
		}
		if(lastGen(arr, n)){
			for(int i = 1; i <= n; i++){
				cout << i << " ";
			}
		}
		else{
			nextGen(arr, n);
			print(arr, n);
		}
		cout << endl;
	}

return 0;
}

